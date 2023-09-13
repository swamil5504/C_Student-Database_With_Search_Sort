#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int rollNo;
    float marks;
};

void accept(struct student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter Student details:\n");
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}

void display(struct student students[], int n) {
    printf("Name\t\tRollNo\tMarks\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t\t%d\t%.2f\n", students[i].name, students[i].rollNo, students[i].marks);
    }
}

int linearSearch(struct student students[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (students[i].rollNo == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(struct student students[], int left, int right, int key) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (students[mid].rollNo == key) {
            return mid;
        } else if (students[mid].rollNo < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

void insertionSort(struct student students[], int n) {
    for (int i = 1; i < n; i++) {
        struct student temp = students[i];
        int j = i - 1;
        while (j >= 0 && students[j].rollNo > temp.rollNo) {
            students[j + 1] = students[j];
            j--;
        }
        students[j + 1] = temp;
    }
}

void selectionSort(struct student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minpos = i;
        for (int j = i + 1; j < n; j++) {
            if (students[j].rollNo < students[minpos].rollNo) {
                minpos = j;
            }
        }
        if (minpos != i) {
            struct student temp = students[i];
            students[i] = students[minpos];
            students[minpos] = temp;
        }
    }
}

void shellSort(struct student students[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            struct student temp = students[i];
            int j;
            for (j = i; j >= gap && students[j - gap].rollNo > temp.rollNo; j -= gap) {
                students[j] = students[j - gap];
            }
            students[j] = temp;
        }
    }
}

int main() {
    int n, choice, key, index;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];

    accept(students, n);

    while (1) {
        printf("\nSelect a Searching/Sorting Technique:\n");
        printf("1. Insertion Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Shell Sort\n");
        printf("4. Linear Search\n");
        printf("5. Binary Search\n");
        printf("6. Exit Program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertionSort(students, n);
                printf("\nSorted Student Data:\n");
                display(students, n);
                break;
            case 2:
                selectionSort(students, n);
                printf("\nSorted Student Data:\n");
                display(students, n);
                break;
            case 3:
                shellSort(students, n);
                printf("\nSorted Student Data:\n");
                display(students, n);
                break;
            case 4:
                printf("Enter the Roll Number to search: ");
                scanf("%d", &key);
                index = linearSearch(students, n, key);
                if (index != -1) {
                    printf("Student found!\n");
                    printf("Name: %s\n", students[index].name);
                    printf("Roll Number: %d\n", students[index].rollNo);
                    printf("Marks: %.2f\n", students[index].marks);
                } else {
                    printf("Student not found.\n");
                }
                break;
            case 5:
                printf("Enter the Roll Number to search: ");
                scanf("%d", &key);
                index = binarySearch(students, 0, n - 1, key);
                if (index != -1) {
                    printf("Student found!\n");
                    printf("Name: %s\n", students[index].name);
                    printf("Roll Number: %d\n", students[index].rollNo);
                    printf("Marks: %.2f\n", students[index].marks);
                } else {
                    printf("Student not found.\n");
                }
                break;
            case 6:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }

    return 0;
}
