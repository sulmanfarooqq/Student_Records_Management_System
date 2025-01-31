#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;
                    
struct Student {
    int rollNo;
    string name;
    string courseCode;
    int marks;
    float cgpa;
};
class StudentArray {
private:
    Student *students;
    int index;
    int total;

public:
    StudentArray(int initial = 10) {
        total = initial;
        index = 0;
        students = new Student[total];
    }
    void insert(const Student& s) {
        if (index == total) {
            // Resize the array if it's full
            total *= 2;
            Student* temp = new Student[total];
            for (int i = 0; i < index; ++i) {
                temp[i] = students[i];
            }
            delete[] students;
            students = temp;
        }
        students[index++] = s;
    }

    void traverse() {
        for (int i = 0; i < index; ++i) {
            cout << "Roll No: " << students[i].rollNo << ", Name: " << students[i].name << ", Course Code: " << students[i].courseCode << ", Marks: " << students[i].marks << ", CGPA: " << students[i].cgpa << endl;
        }
    }
    void course_code( string& courseCode) {
        cout << "Students enrolled in " << courseCode << ":" << endl;
        for (int i = 0; i < index; ++i) {
            if (students[i].courseCode == courseCode) {
                cout << "Roll No: " << students[i].rollNo << ", Name: " << students[i].name << endl;
            }
        }
    }

    void searchByCGPA(float gpa) {
        cout << "Students with CGPA is greater than or equal " << gpa << ":" << endl;
        for (int i = 0; i < index; ++i) {
            if (students[i].cgpa >= gpa) {
                cout << "Roll No: " << students[i].rollNo << ", Name: " << students[i].name << endl;
            }
        }
    }

    void searchByMarks(int marks) {
        cout << "Students with Marks >= " << marks << ":" << endl;
        for (int i = 0; i < index; ++i) {
            if (students[i].marks >= marks) {
                cout << "Roll No: " << students[i].rollNo << ", Name: " << students[i].name << endl;
            }
        }
    }

    void deleteByRollNo(int rollNo) {
        for (int i = 0; i < index; ++i) {
            if (students[i].rollNo == rollNo) {
                for (int j = i; j < index - 1; ++j) {
                    students[j] = students[j + 1];
                }
                index--;
                break;
            }
        }
    }
    
};
#endif
