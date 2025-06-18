#include <stdio.h>

int derived();
int add(int a, int b);

int main() {
    // Primitive DataTypes 
    int age = 21;
    float marks = 55.67;
    double pi = 3.14159265;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);
    printf("Pi: %.8f\n", pi);
    printf("Grade: %c\n\n", grade);

    derived();

  
    printf("Sum of a and b: %d\n", add(6,4));

    return 0;
}

int derived() {
    int numbers[3] = {1, 2, 3};
    printf("First element of Array: %d\n", numbers[0]);

    int x = 100;
    int *ptr = &x;
    printf("Value of x: %d\n", *ptr);
    return 0;
}

int add(int a, int b) {
    int sum = a + b;
    return sum;
}
