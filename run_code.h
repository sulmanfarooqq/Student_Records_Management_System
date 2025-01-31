// running the program of array
#ifndef RUN_H 
#define RUN_H
#include "class_student_array.h" 
class Run_program {
public:
    StudentArray studentList;
public:

    Run_program() { } // Default constructor
    void run()
    {
        cout << " How many students you want to enter: ";
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << " Enter the roll number of student: ";
            int roll;
            cin >> roll;
            cout << " Enter the name of student: ";
            string name;
            cin >> name;
            cout << " Enter the course code of student: ";
            string course;
            cin >> course;
            cout << " Enter the marks of student: ";
            int marks;
            cin >> marks;
            cout << " Enter the cgpa of student: ";
            float cgpa;
            cin >> cgpa;
            Student s = {roll, name, course, marks, cgpa};
            studentList.insert(s);
        }

        int choice;
        do
        {
            cout << "\nMenu:\n";
            cout << "1. Traverse all students\n";
            cout << "2. Search student\n";
            cout << "3. Delete Student by Roll No\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

          if (choice == 1)
            {
                studentList.traverse();
                continue;

            }
            else if (choice == 2)
            {

            for (int i=0;;i++){
 cout << "1. Search by Course Code\n";
            cout << "2. Search by CGPA\n";
            cout << "3. Search by Marks\n";
            cout<<"4. Exit from this phase "<<endl;
            int choice2;
            cout << "Enter your choice: ";
            cin >> choice2;
            if (choice2 == 1)
            {
                string courseCode;
                cout << "Enter course code: ";
                cin >> courseCode;
                studentList.course_code(courseCode);
                continue;
            }
            else if (choice2 ==2 )
            {
                float minCGPA;
                cout << "Enter minimum CGPA: ";
                cin >> minCGPA;
                studentList.searchByCGPA(minCGPA);
                continue;
            }
            else if (choice2 == 3)
            {
                int minMarks;
                cout << "Enter minimum Marks: ";
                cin >> minMarks;
                studentList.searchByMarks(minMarks);
                continue;
            }
            else if (choice2==4)
            {
                cout<<"Exiting... from searching phase";
                break;
            }
            }
            }

            else if (choice ==3)
            {
                int rollNo;
                cout << "Enter Roll No to delete: ";
                cin >> rollNo;
                studentList.deleteByRollNo(rollNo);
                continue;
            }
            else if (choice == 4)
            {
                cout << "Exiting...\n";
                break;
            }
            else
            {
                cout << "Invalid choice.\n";
                                break;

            }break;
			  
        } while (true);
    }
    
}; 
#endif

