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
    for (int i = 0; i < int(students.size()); i++) {
        cout << students[i].firstName << " | " << students[i].lastName << " | " << students[i].studentID << " | " << floor(students[i].GPA*100+0.5)/100 << endl; // print student attributes
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

    students.insert(students.end(), newStudent); // insert new student at the end of vector

    return students;
}

vector<Student> delStudent(vector<Student> students) {
    int studentIDtoDel;
    cout << "ID of student to delete: ";
    cin >> studentIDtoDel;

    cout << "ID to delete: " << studentIDtoDel << endl;

    // erase entry of the vector if student of the given ID exists
    for (int i = 0; i < int(students.size()); i++) {
        if (students[i].studentID == studentIDtoDel) {
            students.erase(students.begin()+i);
        }
    }

    return students;
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

