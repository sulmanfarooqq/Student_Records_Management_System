// runer code for linklist
#ifndef RUN_P
#define RUN_P
#include "linklist_class.h"
class runnner_list
{
public:
    LinkedList list;

public:
    runnner_list() {}
    void runlist() {
    do {
        cout << "1. Insert at beginning\n";
        cout << "2. Insert after\n";
        cout << "3. Insert in sorted order\n";
        cout << "4. Delete first\n";
        cout << "5. Delete last\n";
        cout << "6. Delete by roll no\n";
        cout << "7. Search by different methods\n";
        cout << "8. Display\n";
        cout << "9. Binary search\n";
        cout << "10. Sort list\n";
        cout << "11. Exit\n";

        int choice;
        cin >> choice;

        if (choice == 1) {
            // Create a new student for each insertion
            Student_list* student1 = new Student_list;
            list.insertAtBeginning(student1);
            continue;
        } else if (choice == 2) {
            // Create a new student for each insertion
            Student_list* student1 = new Student_list;
            Student_list* prev = new Student_list;
            list.insertAfter(prev, student1);
            continue;
        } else if (choice == 3) {
            // Create a new student for each insertion
            Student_list* student1 = new Student_list;
            list.insertInSortedOrder(student1);
            continue;
        } else if (choice == 4) {
            list.deletefirst();
            continue;
        } else if (choice == 5) {
            list.deletelast();
            continue;
        } else if (choice == 6) {
            int rollno;
            cout << "Enter the roll no to delete: ";
            cin >> rollno;
            list.delete_rollno(rollno);
            continue;
        } else if (choice == 7) {
            for (int i = 0;; i++) {
                cout << "1. Search by course code\n";
                cout << "2. Search by cgpa\n";
                cout << "3. Search by marks\n";
                cout << "4. Exit from this phase\n";
                int choice2;
                cout << "Enter your choice: ";
                cin >> choice2;
                if (choice2 == 1) {
                    string courseCode;
                    cout << "Enter the course code to search: ";
                    cin >> courseCode;
                    list.course_code_search(courseCode);
                    continue;
                } else if (choice2 == 2) {
                    float gpa;
                    cout << "Enter the cgpa to search: ";
                    cin >> gpa;
                    list.gpa_search(gpa);
                    continue;
                } else if (choice2 == 3) {
                    int marks;
                    cout << "Enter the marks to search: ";
                    cin >> marks;
                    list.marks_search(marks);
                    continue;
                } else if (choice2 == 4) {
                    cout << "Exit from this phase\n";
                    break;
                } else {
                    cout << "Invalid choice\n";
                    continue;
                }
            }
        } else if (choice == 8) {
            list.traverse();
            continue;
        } else if (choice == 9) {
            cout << "Enter the roll no to search: ";
            int rollNo;
            cin >> rollNo;
            list.binary_search(rollNo);
            continue;
        } else if (choice == 10) {
            list.bubbl_sort();
            continue;
        } else if (choice == 11) {
            cout << "Exiting.... " << endl;
            break;
        } else {
            cout << "Invalid choice\n";
            continue;
        }
    } while (true);
}

};
#endif
