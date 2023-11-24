#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5

struct Student {
    char name[50];
    int rollNumber;
    int roomNumber;
};

struct Student students[MAX_STUDENTS];

void addStudent(int rollNumber, char name[50], int roomNumber, int* numStudents) {
    if (*numStudents > MAX_STUDENTS) {
        strcpy(students[*numStudents].name, name);
        students[*numStudents].rollNumber = rollNumber;
        students[*numStudents].roomNumber = roomNumber;
        (*numStudents)++;
        printf("Student added successfully.\n");
    } else {
        printf("Hostel is full. Cannot add more students.\n");
    }
}

// Function to display all students in the hostel
void displayStudents(int numStudents) {
    printf("Hostel Accommodation Details:\n");
    printf("Roll Number\tName\tRoom Number\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%d\t\t%s\t%d\n", students[i].rollNumber, students[i].name, students[i].roomNumber);
    }
}

int main() {
    int numStudents = 0;
    int choice, rollNumber, roomNumber;
    char name[50];

    while (1) {
        printf("\nHostel Accommodation System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Student Roll Number: ");
                scanf("%d", &rollNumber);
                printf("Enter Student Name: ");
                scanf("%s", name);
                printf("Enter Room Number: ");
                scanf("%d", &roomNumber);
                addStudent(rollNumber, name, roomNumber, &numStudents);
                break;
            case 2:
                displayStudents(numStudents);
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
