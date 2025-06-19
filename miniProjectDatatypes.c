#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    unsigned int rollNo;
    float marks;
    char grade;
    unsigned char pass;
    double percentage;
    long totalStudents = 0;
    int n;

    printf("Enter how many students: ");
    scanf("%d", &n);
    getchar(); 

    for (int i = 0; i < n; i++) {
        printf("\nEnter student name: ");
        fgets(name, sizeof(name), stdin);
        

        printf("Enter student Roll Number: ");
        scanf("%u", &rollNo);

        printf("Enter student marks: ");
        scanf("%f", &marks);
        getchar(); 

        percentage = marks;
        totalStudents++;
        pass = 1;

        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 75) {
            grade = 'B';
        } else if (percentage >= 35) {
            grade = 'C';
        } else {
            grade = 'F';
            pass = 0;
        }

        printf("\n-------- Student Records --------\n");
        printf("Student name: %s\n", name);
        printf("Student RollNo: %u\n", rollNo);
        printf("Student marks: %.2f\n", marks);
        printf("Student grade: %c\n", grade);
        printf("Student status: %s\n", (pass == 1) ? "Pass" : "Fail");
        printf("Total Students entered : %ld\n", totalStudents);
    }

    return 0;
}
