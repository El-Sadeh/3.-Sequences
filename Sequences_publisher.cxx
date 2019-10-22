//GS Comments:
/*
 *1. The sequence is always filled with enum C and not A,B,C as you intended.
 *2. Your sequence length goes from 0 to 9 and not from 1 to 10 as required. 
 */
#include <iostream>

#include <dds/pub/ddspub.hpp>
#include <rti/util/util.hpp> // for sleep()

#include "Sequences.hpp"

void publisher_main(int domain_id, int sample_count)
{
	// Create a DomainParticipant with default Qos
	dds::domain::DomainParticipant participant(domain_id);

	// Create a Topic -- and automatically register the type
	dds::topic::Topic<Sequences> topic(participant, "Example Sequences");

	// Create a DataWriter with default Qos (Publisher created in-line)
	dds::pub::DataWriter<Sequences> writer(dds::pub::Publisher(participant), topic);

	Sequences sample;
	BasicEnum tempBasic;
	for (int count = 0; count < sample_count || sample_count == 0; count++) {
		// Modify the data to be written here
		int countMod3 = count % 3;
		switch (countMod3)
		{
		case 0:
			tempBasic = BasicEnum::A;
		case 1:
			tempBasic = BasicEnum::B;
		case 2:
			tempBasic = BasicEnum::C;
		default:
			break;
		};
		if ((count % 10) < 9)
			sample.basic().push_back(tempBasic);
		else
			sample.basic().clear();
		std::cout << "Writing Sequences, count " << count << std::endl;
		writer.write(sample);

		rti::util::sleep(dds::core::Duration(1));//1 Hz
	}
}

int main(int argc, char *argv[])
{

	int domain_id = 0;
	int sample_count = 0; // infinite loop

	if (argc >= 2) {
		domain_id = atoi(argv[1]);
	}
	if (argc >= 3) {
		sample_count = atoi(argv[2]);
	}

	// To turn on additional logging, include <rti/config/Logger.hpp> and
	// uncomment the following line:
	// rti::config::Logger::instance().verbosity(rti::config::Verbosity::STATUS_ALL);

	try {
		publisher_main(domain_id, sample_count);
	}
	catch (const std::exception& ex) {
		// This will catch DDS exceptions
		std::cerr << "Exception in publisher_main(): " << ex.what() << std::endl;
		return -1;
	}

	// RTI Connext provides a finalize_participant_factory() method
	// if you want to release memory used by the participant factory singleton.
	// Uncomment the following line to release the singleton:
	//
	// dds::domain::DomainParticipant::finalize_participant_factory();

	return 0;
}

