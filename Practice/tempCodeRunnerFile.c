strcpy(students[*numStudents].name, name);
        students[*numStudents].rollNumber = rollNumber;
        students[*numStudents].roomNumber = roomNumber;
        (*numStudents)++;
        printf("Student added successfully.\n");