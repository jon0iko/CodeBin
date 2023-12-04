#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to hold student information
typedef struct Student {
    int id;
    char name[50];
    float cgpa;
    struct Student *next;
} Student;

// Function to insert new student information at specified index
void insert(Student **head, Student newStudentInfo, int insertIndex) {
    Student *newStudent = (Student *)malloc(sizeof(Student));
    if (newStudent == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    *newStudent = newStudentInfo;
    newStudent->next = NULL;

    if (insertIndex <= 0) {
        printf("Invalid index for insertion.\n");
        free(newStudent);
        return;
    }

    if (*head == NULL) { // Insert at the beginning if list is empty
        *head = newStudent;
        return;
    }

    Student *temp = *head;
    int count = 1;

    while (count < insertIndex - 1 && temp->next != NULL) {
        temp = temp->next;
        count++;
    }

    if (insertIndex == 1) { // Insert at the beginning
        newStudent->next = *head;
        *head = newStudent;
    } else if (temp->next == NULL) { // Insert at the end
        temp->next = newStudent;
    } else { // Insert in the middle
        newStudent->next = temp->next;
        temp->next = newStudent;
    }
}

// Function to delete a student with given id from the list
int delete(Student **head, int sid) {
    if (*head == NULL) {
        printf("List is empty. Deletion failed.\n");
        return 0;
    }

    Student *temp = *head;
    Student *prev = NULL;

    // If the node to be deleted is the first node
    if (temp != NULL && temp->id == sid) {
        *head = temp->next;
        free(temp);
        return 1;
    }

    // Find the node with the given id
    while (temp != NULL && temp->id != sid) {
        prev = temp;
        temp = temp->next;
    }

    // If node with given id was not found
    if (temp == NULL) {
        printf("Student with ID %d not found. Deletion failed.\n", sid);
        return 0;
    }

    // Delete the node with given id
    prev->next = temp->next;
    free(temp);
    return 1;
}

int main() {
    Student *studentList = NULL;

    // Example usage
    Student student1 = {101, "Alice", 3.8, NULL};
    Student student2 = {102, "Bob", 3.5, NULL};
    Student student3 = {103, "Charlie", 3.2, NULL};

    insert(&studentList, student1, 1); // Insert student1 at index 1
    insert(&studentList, student2, 2); // Insert student2 at index 2
    insert(&studentList, student3, 3); // Insert student3 at index 3

    printf("Initial list:\n");
    Student *temp = studentList;
    while (temp != NULL) {
        printf("ID: %d, Name: %s, CGPA: %.2f\n", temp->id, temp->name, temp->cgpa);
        temp = temp->next;
    }

    delete(&studentList, 102); // Delete student with ID 102

    printf("\nAfter deletion of student with ID 102:\n");
    temp = studentList;
    while (temp != NULL) {
        printf("ID: %d, Name: %s, CGPA: %.2f\n", temp->id, temp->name, temp->cgpa);
        temp = temp->next;
    }

    return 0;
}
