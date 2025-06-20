#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    unsigned int rollNo;
    float Java, Python, C, Cpp;
    double percentage;
    char grade;
    int n;

    printf("Enter how many students you want to fill: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        unsigned char pass = 0;
        int totalSubjects = 0;
        double totalMarks = 0;

        while (getchar() != '\n');
        printf("\nEnter Student Name: ");
        fgets(name, sizeof(name), stdin);

        name[strcspn(name, "\n")] = '\0';

        printf("Enter Student Roll No: ");
        scanf("%u", &rollNo);

        printf("Enter Java Marks: ");
        scanf("%f", &Java);
        if (Java >= 0) {
            totalMarks += Java;
            totalSubjects++;
        }

        printf("Enter Python Marks: ");
        scanf("%f", &Python);
        if (Python >= 0) {
            totalMarks += Python;
            totalSubjects++;
        }

        printf("Enter C Marks: ");
        scanf("%f", &C);
        if (C >= 0) {
            totalMarks += C;
            totalSubjects++;
        }

        printf("Enter C++ Marks: ");
        scanf("%f", &Cpp);
        if (Cpp >= 0) {
            totalMarks += Cpp;
            totalSubjects++;
        }

        percentage = (totalMarks / (totalSubjects * 100.0)) * 100.0;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 70)
            grade = 'B';
        else if (percentage >= 50)
            grade = 'C';
        else {
            grade = 'F';
            pass = 1;
        }

        printf("\n----- Student Report -----------\n");
        printf("Name      : %s\n", name);
        printf("Roll No   : %u\n", rollNo);
        printf("Percentage: %.2lf%%\n", percentage);
        printf("Grade     : %c\n", grade);
        printf("Result    : %s\n", (pass == 0) ? "Pass" : "Fail");
        printf("--------------------------------\n");
    }

    return 0;
}
