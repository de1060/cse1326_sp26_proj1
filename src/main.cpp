#include "grade.hpp"
#include <iostream>
#include <string>


int main(int argc, char* argv[])
{
	std::array<grade, 10000> GradeArray;


	
	grade G{}; // this is just done so that the compiler
		   // will read it and check for errors.  it is
		   // not needed for anything else.
	std::cout << "hello" << std::endl;
	return 0;
}
