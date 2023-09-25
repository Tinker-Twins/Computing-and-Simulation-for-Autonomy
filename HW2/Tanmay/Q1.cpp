/*  Nick Sweeting 2013/10/08
    Student List (OOP)
    MIT Lisence
    g++ Vectors.cpp -o main && ./main

    Example of using vectors to store a list of students and their GPAs.
    It is referred from: https://github.com/pirate/Cpp-Data-Structures/
*/

#include <stdlib.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int studentID;
    double GPA;
};

void printStudents(vector<Student> students) {
    // complete the functions here ...
    cout << "ID\t" << "FIRST NAME\t" << "LAST NAME\t" << "GPA" << endl; // Create a header
    
    for (int i=0; i<students.size(); i++) { // Print attributes of each student
    	if (students[i].firstName.length() < 8) { // Check length of student's first name to decide number of tab indentation(s)
    	    if (students[i].lastName.length() < 8) { // Check length of student's last name to decide number of tab indentation(s)
    	        cout << students[i].studentID << "\t" << students[i].firstName << "\t\t" << students[i].lastName << "\t\t" << students[i].GPA << endl; // Print attributes of the student
    	    }
    	    else { // Check length of student's last name to decide number of tab indentation(s)
    	        cout << students[i].studentID << "\t" << students[i].firstName << "\t\t" << students[i].lastName << "\t" << students[i].GPA << endl; // Print attributes of the student
    	    }
    	}
    	else { // Check length of student's first name to decide number of tab indentation(s)
    	    if (students[i].lastName.length() < 8) { // Check length of student's last name to decide number of tab indentation(s)
    	        cout << students[i].studentID << "\t" << students[i].firstName << "\t" << students[i].lastName << "\t\t" << students[i].GPA << endl; // Print attributes of the student
    	    }
    	    else { // Check length of student's last name to decide number of tab indentation(s)
    	        cout << students[i].studentID << "\t" << students[i].firstName << "\t" << students[i].lastName << "\t" << students[i].GPA << endl; // Print attributes of the student
    	    }
    	}
    }
};

vector<Student> addStudent(vector<Student> students) {

    Student newStudent;

    cout << "First Name: ";
    cin >> newStudent.firstName;
    cout << "Last Name: ";
    cin >> newStudent.lastName;
    cout << "ID: ";
    cin >> newStudent.studentID;
    cout << "GPA: ";
    cin >> newStudent.GPA;

    // complete the functions here ...
    students.emplace_back(newStudent);

    return students;
}

vector<Student> delStudent(vector<Student> students) {
    int studentIDtoDel;
    cout << "ID of student to delete: ";
    cin >> studentIDtoDel;

    cout << "ID to delete: " << studentIDtoDel << endl;

    vector<Student> newStudents;
    // complete the functions here ...
    newStudents = students; // Initialize new students list as old students
    
    for (int i=0; i<students.size(); i++) {
        if (students[i].studentID == studentIDtoDel) { // Search for the student ID to be deleted
            newStudents.erase(newStudents.begin()+i);
        }
    }

    return newStudents;
}

int main() {
    vector<Student> students;
    string input;

    while (true) {
        cout<<"Input operation: ";
        cin >> input;

        if (input == "ADD" || input == "a" || input == "add") {
            students = addStudent(students);
        }
        else if (input == "PRINT" || input == "p" || input == "print") {
            printStudents(students);
        }
        else if (input == "DELETE" || input == "d" || input == "delete") {
            students = delStudent(students);
        }
        else if (input == "QUIT" || input == "q" || input == "quit") {
            return 0;
        }
    }
}
