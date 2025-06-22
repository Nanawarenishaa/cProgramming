#include <stdio.h>

struct student {
    int rollNo;
    char name[30];
    float marks;
};


int main() {
   struct student s = { 1 , "Nisha" , 78.34 };
   printf("Roll No. : %d\n", s.rollNo);
   printf("Name : %s\n",s.name);
   printf("Name : %.2f\n",s.marks);

   

    return 0;

}