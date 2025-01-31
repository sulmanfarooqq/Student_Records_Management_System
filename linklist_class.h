#ifndef PERSON_P
#define PERSON_P
#include <iostream>
#include <string>
#include <cstddef>
using namespace std;
    
struct Student_list {
    int rollNo;
    string name;
    string courseCode;
    int marks;
    float cgpa;
    Student_list* next; // Pointer to the next student in the list
};
class LinkedList {
private:
    Student_list* head;

public:
    LinkedList() {
        head = NULL;
    }
    void datainsertion(Student_list* newStudent){
     cout<<"Plese Enter the roll no of the student: ";
        cin>>newStudent->rollNo;
        cout<<"Plese Enter the name of the student: ";
        cin>>newStudent->name;
        cout<<"Plese Enter the course code of the student: ";
        cin>>newStudent->courseCode;
        cout<<"Plese Enter the marks of the student: ";
        cin>>newStudent->marks;
        cout<<"Plese Enter the cgpa of the student: ";
        cin>>newStudent->cgpa;
    }

    // Insertion Operations
    void insertAtBeginning(Student_list* newStudent) {
        newStudent->next = head;
        head = newStudent;
        datainsertion(newStudent);
    }

 void insertAfter(Student_list* prevNode, Student_list* newStudent) {
        if (prevNode == NULL) {
            cout <<"Previous node cannot be null." << endl;
            return;
        }
        newStudent->next = prevNode->next;
        prevNode->next = newStudent;
        datainsertion(newStudent);
    }
// insert into the sorted order
void insertInSortedOrder(Student_list* newStudent) {
    // First, collect the data for the new student
    datainsertion(newStudent);

    // Now, insert the new student in sorted order
    Student_list* current = head;
    Student_list* prev = NULL;

    // Traverse the list to find the correct position for the new student
    while (current != NULL && newStudent->rollNo > current->rollNo) {
        prev = current;
        current = current->next; // Move to the next node
    }

    // Insert the new student at the correct position
    if (prev == NULL) {
        // Insert at the beginning of the list
        newStudent->next = head;
        head = newStudent;
    } else {
        // Insert in the middle or at the end of the list
        prev->next = newStudent;
        newStudent->next = current;
    }
}

void binary_search(int rollno){
    Student_list* current=head;
    Student_list* prev=NULL;
    while(current!=NULL){
        if(current->rollNo==rollno){
            cout<<"Roll No: "<<current->rollNo<<", Name: "<<current->name<<", Course Code: "<<current->courseCode<<", Marks: "<<current->marks<<", CGPA: "<<current->cgpa<<endl;
            return;
        }
        current=current->next;
    }
    cout<<"Student not found"<<endl;
}
    // Sorting Operations
void bubbl_sort() {
    if (head == NULL || head->next == NULL) {
        // List is empty or has only one node, so it's already sorted
        return;
    }

    bool swapped;
    Student_list* ptr1;
    Student_list* lptr = NULL;

    do {
        swapped = false;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->rollNo > ptr1->next->rollNo) {
                // Swap the nodes
                Student_list* temp = ptr1->next;
                ptr1->next = temp->next;
                temp->next = ptr1;

                if (ptr1 == head) {
                    // Update head if the first node is swapped
                    head = temp;
                } else {
                    // Update the previous node's next pointer
                    Student_list* prev = head;
                    while (prev->next != ptr1) {
                        prev = prev->next;
                    }
                    prev->next = temp;
                }

                swapped = true;
            } else {
                ptr1 = ptr1->next;
            }
        }
        lptr = ptr1; // Mark the last sorted node
    } while (swapped);
}
    void traverse() {
        Student_list* current = head;
        while (current != NULL) {
            cout << "Roll No: " << current->rollNo << ", Name: " << current->name << ", Course Code: " << current->courseCode << ", Marks: " << current->marks << ", CGPA: " << current->cgpa << endl;
            current = current->next;
        }
    }

    // Search Operations
    void course_code_search(string& courseCode) {
        Student_list* current = head;
        cout << "Students enrolled in " << courseCode << ":" << endl;
        while (current != NULL) {
            if (current->courseCode == courseCode) {
                cout << "Roll No: " << current->rollNo << ", Name: " << current->name << endl;
            }
            current = current->next;
        }
    }

    void gpa_search(float gpa) {
        Student_list* current = head;
        cout << "Students with CGPA >= " << gpa << ":" << endl;
        while (current != NULL) {
            if (current->cgpa >= gpa) {
                cout << "Roll No: " << current->rollNo << ", Name: " << current->name << endl;
            }
            current = current->next;
        }
    }
     void marks_search(int marks){
         Student_list* current= head;
         cout<<" student with name"<<current->name<<" and marks greater then "<<marks<<endl;
         while(current!=NULL){
            if(current->marks>=marks){
                cout<<"Name :"<<current->name<<" and marks of"<<current->marks<<endl;
            }
         }
     }

    // Deletion Operations
     void deletefirst(){
            Student_list* current=head;
            head=current->next;
            delete current;

     }
     void deletelast(){
         Student_list* current=head;
         Student_list* prev=NULL;
         while(current->next!=NULL){
             prev=current;
             current=current->next;
         }
         prev->next=NULL;
         delete current;
     }
    void delete_rollno(int rollno){
        Student_list* current=head;
        Student_list* prev=NULL;
        while(current!=NULL){
            if(current->rollNo==rollno){
                if(prev==NULL){
                    head=current->next;
                    delete current;
                    return;
                }
                prev->next=current->next;
                delete current;
                return;
            }
            prev=current;  
            current=current->next; 
        }
    }


};
#endif
