// Define a struct Student with name, roll number, and marks; declare a variable and print its members.

#include <stdio.h>

struct Student
{
    char name[25];
    int roll_number;
    int marks;
};
int main()
{
    struct Student s = {"Prashant", 7, 98};
    printf("Name:%s\n", s.name);
    printf("Roll number:%d\n", s.roll_number);
    printf("Marks:%d\n", s.marks);
    return 0;
}

// Use typedef to simplify a struct declaration (typedef struct {...} Point;).

#include <stdio.h>

typedef struct {
    char name[25];
    int roll_number;
    int marks;
} Student;

int main() {
    Student s={"Prashant", 7, 98};
    printf("Name:%s\n", s.name);
    printf("Roll number:%d\n", s.roll_number);
    printf("Marks:%d\n", s.marks);

    return 0;
}

// Create an array of 5 struct Student and fill it using a loop; print all records.

