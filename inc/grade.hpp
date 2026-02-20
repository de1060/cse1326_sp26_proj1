#include <string>
#include <iostream>

struct letterGrade
{
	short 
	A, B, C, D, F, I, P, Q, W, Z, R;
};

// This class holds the grade data for one course.
struct grade
{
	display();
	grade();
	~grade();
	letterGrade letterG;

	float 
	courseGPA, dropPercent;
	short 
	courseNum, gradeCount, sectionNum, year; 
	string 
	career, courseTitle, instructor, semester, subjectID;

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
*/
