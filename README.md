# Student Management System - Array and Linked List Implementations

This project is a Student Management System implemented in C++ that demonstrates two different data structures for managing student records: a dynamic array and a singly linked list. The user can choose which data structure to use for managing student data.

## Project Structure

- `class_student_array.h`: Defines the `Student` struct and the `StudentArray` class which manages student records using a dynamic array. Supports insertion, traversal, searching, and deletion.
- `linklist_class.h`: Defines the `Student_list` struct and the `LinkedList` class which manages student records using a singly linked list. Supports insertion, traversal, searching, sorting, and deletion.
- `linklist_main.h`: Contains the `runnner_list` class which provides a menu-driven interface to interact with the linked list implementation.
- `run_code.h`: Contains the `Run_program` class which provides a menu-driven interface to interact with the array implementation.
- `project.cpp`: The main program file that allows the user to choose between running the array-based or linked list-based student management system.

## Features

### Array Implementation (`StudentArray`)

- Insert student records dynamically (resizes array as needed)
- Traverse and display all student records
- Search students by:
  - Course code
  - CGPA (greater than or equal to a specified value)
  - Marks (greater than or equal to a specified value)
- Delete student by roll number

### Linked List Implementation (`LinkedList`)

- Insert student records at:
  - Beginning
  - After a specified node
  - In sorted order by roll number
- Traverse and display all student records
- Search students by:
  - Course code
  - CGPA (greater than or equal to a specified value)
  - Marks (greater than or equal to a specified value)
- Binary search by roll number
- Sort the list by roll number (bubble sort)
- Delete student by:
  - First node
  - Last node
  - Roll number

## How to Run

1. Compile the project using a C++ compiler that supports C++11 or later.
2. Run the executable.
3. When prompted, enter your choice:
   - Enter `1` to run the array-based student management system.
   - Enter `2` to run the linked list-based student management system.
4. Follow the on-screen menu options to perform various operations.

## Menu Options

### Array Implementation Menu

1. Traverse all students
2. Search student by course code, CGPA, or marks
3. Delete student by roll number
4. Exit

### Linked List Implementation Menu

1. Insert at beginning
2. Insert after a node
3. Insert in sorted order
4. Delete first node
5. Delete last node
6. Delete by roll number
7. Search by course code, CGPA, or marks
8. Display all students
9. Binary search by roll number
10. Sort list by roll number
11. Exit

## Notes

- Input validation is minimal; please enter valid data as prompted.
- The linked list implementation allows more flexible insertion and sorting options.
- The array implementation dynamically resizes as more students are added.

## Author

This project was developed as part of a third semester Data Structures and Algorithms course.
