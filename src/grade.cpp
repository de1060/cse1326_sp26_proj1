#include "grade.hpp"
#include <iostream>
#include <string>

unsigned int grade::dataCounter = 0;

//Default constructor
grade::grade()
{
				   // this is a highly sophisticated constructor
	dataCounter++; //? <--this comment means "I don't yet" or "I am stuck on how to implement".
}

//Constructor
grade::grade(float courseGPA,   float dropPercent,  short courseNum,    short gradeCount
			 short sectionNum,  short year, std::string career, std::string courseTitle,
			 std::string instructor, std::string semester, std::string subjectID)
{
	this->dropPercent = dropPercent;
	this->courseTitle = courseTitle;
	this->instructor = instructor;
	this->gradeCount = gradeCount;
	this->sectionNum = sectionNum;
	this->courseNum = courseNum;
	this->courseGPA = courseGPA;
	this->subjectID = subjectID;
	this->semester = semester;
	this->career = career;
	this->year = year;

}

//Destructor
grade::~grade()
{
	std::cout << "Destructor is called" << std::endl;
}

grade::print()
{
	std::cout << "Subject ID: "     << this->sujectID    << std::endl
			  << "Course Number: "  << this->courseNum   << std::endl
			  << "Course Title: "   << this->courseTitle << std::endl
			  << "Section Number: " << this->sectionNum  << std::endl
			  << "Grades:" 			<< std::endl
			  << "A:" 				<< grade.A << std::endl
			  << "B:" 				<< grade.B << std::endl
			  << "C:"				<< grade.C << std::endl
			  << "D:" 				<< grade.D << std::endl
			  << "F:" 				<< grade.F << std::endl
			  << "I:" 				<< grade.I << std::endl
			  << "P:" 				<< grade.P << std::endl
			  << "Q:" 				<< grade.Q << std::endl
			  << "W:" 				<< grade.W << std::endl
			  << "Z:" 				<< grade.Z << std::endl
			  << "R:" 				<< grade.R << std::endl
			  << "Grades Count:" 	<< std::endl //?
			  << "Year:" 			<< this->year << std::endl
			  << "Semester:"	 	<< this->semester << std::endl 
			  << "Career:" 			<< this->career << std::endl
			  << "Instructor1:" 	<< std::endl //?
			  << "Instructor2:" 	<< std::endl //?
			  << "Instructor3:" 	<< std::endl //?
			  << "Instructor4:" 	<< std::endl //?
			  << "Instructor5:"		<< std::endl //?
			  << "Course GPA:" 		<< this->courseGPA << std::endl
			  << "Drop Percent:" 	<< this->dropPercent << std::endl;
	
}



/*
#include <string>
#include <iostream>

struct letterGrade
{
	short 
	A, B, C, D, F, I, P, Q, W, Z, R;
};


//---Sample, to see how the data looks as a quick reference.---
/*
{
      "subject_id": "SPAN",
      "course_number": "5303",
      "course_title": "APPLIED SPANISH LINGUISTICS",
      "section_number": "001",
      "grades": {
        "A": "5",
        "B": "2",
        "C": "0",
        "D": "0",
        "F": "0",
        "I": "0",
        "P": "2",
        "Q": "0",
        "W": "1",
        "Z": "0",
        "R": "0"
      },
      "grades_count": "10",
      "year": "2020",
      "semester": "Fall",
      "career": "GRAD",
      "instructor1": "A Elliott",
      "instructor2": "",
      "instructor3": "",
      "instructor4": "",
      "instructor5": "",
      "course_gpa": 3.78,
      "drop_percent": 8.33
    },
    {
      "subject_id": "ECON",
      "course_number": "5337",
      "course_title": "BUSINESS & ECONOMIC FORECASTING",
      "section_number": "001",
      "grades": {
        "A": "9",
        "B": "7",
        "C": "0",
        "D": "3",
        "F": "1",
        "I": "0",
        "P": "4",
        "Q": "0",
        "W": "2",
        "Z": "0",
        "R": "0"
      },
      "grades_count": "26",
      "year": "2020",
      "semester": "Fall",
      "career": "GRAD",
      "instructor1": "Aaron Smallwood",
      "instructor2": "",
      "instructor3": "",
      "instructor4": "",
      "instructor5": "",
      "course_gpa": 3.17,
      "drop_percent": 6.67
    },
    {
      "subject_id": "ME",
      "course_number": "5316",
      "course_title": "THERMAL CONDUCTION",
      "section_number": "004",
      "grades": {
        "A": "7",
        "B": "2",
        "C": "0",
        "D": "0",
        "F": "0",
        "I": "0",
        "P": "0",
        "Q": "0",
        "W": "0",
        "Z": "0",
        "R": "0"
      },
      "grades_count": "9",
      "year": "2020",
      "semester": "Fall",
      "career": "GRAD",
      "instructor1": "Abdolhossein Haji-Sheikh",
      "instructor2": "",
      "instructor3": "",
      "instructor4": "",
      "instructor5": "",
      "course_gpa": 3.78,
      "drop_percent": 0.0
    },
*/

//---References---
/*
https://www.geeksforgeeks.org/c/c-float-and-double/
https://www.geeksforgeeks.org/cpp/enumeration-in-cpp/
https://stackoverflow.com/questions/71001258/how-to-read-and-use-data-in-a-json-file-using-c
https://www.geeksforgeeks.org/cpp/this-pointer-in-c/
https://www.youtube.com/watch?v=F1Drzhzpwtc        (this Keyword And Use Cases Explained | C++ Tutorial [Portfolio Courses])
*/
