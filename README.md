# C_Student-Database_With_Search_Sort

This is a Student Management System implemented in C. It allows you to store and manipulate student records, including their names, roll numbers, and marks. The program provides functionality to accept student details, sort the records using different sorting techniques, and perform a linear search or a binary search to find a specific student based on their roll number.

## Features

- Input student details: Enter student information such as name, roll number, and marks for multiple students at once.

- Sorting techniques: Five sorting techniques are available:
  - Insertion Sort
  - Selection Sort
  - Shell Sort
  - Bucket Sort: Sorts the records based on marks using the Bucket Sort algorithm.
  - Radix Sort: Sorts the records based on marks using the Radix Sort algorithm.

- Searching options:
  - Linear Search: Find a student by their roll number using linear search.
  - Binary Search: Find a student by their roll number using binary search (requires sorting beforehand).

- Display sorted records: After sorting, the program displays sorted student records including name, roll number, and marks.

- Continuous execution: Perform multiple sorting and searching operations without restarting the program.

- User-friendly interface: Simple and intuitive command-line interface with prompts and easy navigation.

## Usage

1. When prompted, enter the number of students for which you want to input records.

2. Provide the details for each student, including their name, roll number, and marks.

3. Choose a searching/sorting technique from the available options:
    - Insertion Sort
    - Selection Sort
    - Shell Sort
    - Bucket Sort(Present in Another File)
    - Radix Sort(Present in Another File)

4. Depending on your choice, the program will either sort the student records or search for a specific student.

5. The program will display the sorted student records or the search result.

6. You can repeat the sorting/searching process as many times as desired.

## Additional Code

The code for Bucket Sort and Radix Sort, used for sorting the student records based on marks, is provided in a separate file named `buckradswamil.c`. Refer to that file for the code related to Bucket Sort and Radix Sort.

The remaining searching and sorting algorithms used in the program can be found in the file `se_so_.c`.

## How to Run

To run the program, follow these steps:

1. Make sure you have a C compiler installed on your system (such as GCC).

2. Clone the repository or download the source code files.
