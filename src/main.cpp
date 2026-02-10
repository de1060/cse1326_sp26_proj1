#include <iostream>
#include <string>
#include "grade.hpp"
#include "dataImporter.hpp"

int main(int argc, char* argv[])
{

	grade G{}; // this is just done so that the compiler
		   // will read it and check for errors.  it is
		   // not needed for anything else.

	// create a dataImporter
	std::string filename = "some valid filename.json";
	dataImporter DI{};  // DI is Data Importer....
			    
	// actually import the data into the array
	//grade AOG[100];                  // this needs to be in the grade header...
	//unsigned int maxSizeOfArray=100; // as does this
        //unsigned int num = DI.readFromFile(filename,arrayOfgrades,maxSizeofArray);	

	// perhaps here we need to do some processing.  or maybe it is done
	// after each command???


        // create the commandProcessor
	std::cout << "Welcome to the command line MavGrades" << std::endl;
	// while input commands are OK, process the commands
	// {
	// }

	// clean up
	return 0;
}
