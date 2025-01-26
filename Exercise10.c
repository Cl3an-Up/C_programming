#include <stdio.h>
#include <string.h>

/*
Create a program to manage student records. Each student has the following attributes:

Name (string)
Roll Number (integer)
Marks in three subjects (stored in an array)
Your program should:

Use a struct to define a Student.
Allow the user to input details for three students.
Display the details of the students, including the total and average marks for each.
*/

struct Student {
    char name[50];
    int roll_number;
    int marks[3];
    float total;
    float average;
};

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void inputStudentDetails(struct Student students[], int index) {
    printf("Name: ");
    clearInputBuffer(); // Clear any leftover input
    fgets(students[index].name, sizeof(students[index].name), stdin);
    students[index].name[strcspn(students[index].name, "\n")] = '\0'; // Remove newline

    printf("Roll Number: ");
    scanf("%d", &students[index].roll_number);

    students[index].total = 0; // Initialize total marks to 0

    for (int i = 0; i < 3; i++) {
        do {
            printf("Marks in subject %d (0-100): ", i + 1);
            scanf("%d", &students[index].marks[i]);
            if (students[index].marks[i] < 0 || students[index].marks[i] > 100) {
                printf("Invalid marks! Please enter a value between 0 and 100.\n");
            }
        } while (students[index].marks[i] < 0 || students[index].marks[i] > 100);

        students[index].total += students[index].marks[i];
    }
    students[index].average = students[index].total / 3.0;
}

void displayStudentDetails(struct Student students[], int index) {
    printf("\nStudent Name: %s\n", students[index].name);
    printf("Roll Number: %d\n", students[index].roll_number);
    printf("Total Marks: %.2f\n", students[index].total);
    printf("Average Marks: %.2f\n", students[index].average);
}

int main() {
    struct Student students[3];

    printf("Enter details for three students:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        inputStudentDetails(students, i);
    }

    printf("\nDisplaying student details:\n");
    for (int i = 0; i < 3; i++) {
        displayStudentDetails(students, i);
    }

    return 0;
}
