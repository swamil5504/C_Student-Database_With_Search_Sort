# C_Student-Database_With_Search_Sort

This is a Student Management System implemented in C. It allows you to store and manipulate student records, including their names, roll numbers, and marks. The program provides functionality to accept student details, sort the records using different sorting techniques, and perform a linear search to find a specific student based on their roll number.

## Features

- Accept student details: The program prompts the user to enter the details of multiple students, including their names, roll numbers, and marks. The information is stored in an array of `struct student` objects.

- Sorting techniques: The program offers three sorting techniques: Insertion Sort, Selection Sort, and Shell Sort. You can choose one of these techniques to sort the student records based on their roll numbers. The chosen sorting algorithm is:

    - Insertion Sort: This algorithm iterates over the array and places each element in its correct position by comparing it with the previous elements.

    - Selection Sort: This algorithm finds the minimum element in each iteration and swaps it with the element at the current position.

    - Shell Sort: This algorithm is an optimized version of insertion sort that compares elements that are far apart before sorting them.

- Display sorted student data: After sorting the student records, the program displays the sorted data, including the names, roll numbers, and marks of each student.

- Linear search: The program allows you to search for a specific student based on their roll number using linear search. If the student is found, their details are displayed.

## Usage

1. Enter the number of students: Specify the number of student records you want to manage.

2. Enter Student details: Provide the details for each student, including their name, roll number, and marks.

3. Select a sorting technique: Choose one of the available sorting techniques (1 for Insertion Sort, 2 for Selection Sort, 3 for Shell Sort).

4. Sorted Student Data: The program displays the sorted student data, showing the names, roll numbers, and marks in ascending order of roll numbers.

5. Enter the Roll Number to search: Provide a roll number to search for a specific student.

6. Student found: If the student is found based on the provided roll number, their details (name, roll number, and marks) are displayed.

7. Student not found: If the student is not found, a message indicating that the student was not found is displayed.

## File Structure

- main.c: Contains the main program logic and user interface.
- student.h: Contains the struct definition for student and function declarations.
- student.c: Contains the function implementations for accepting, displaying, sorting, and searching student records.

## How to Run

To run the program, follow these steps:

1. Make sure you have a C compiler installed on your system (such as GCC).

2. Clone the repository or download the source code files.
