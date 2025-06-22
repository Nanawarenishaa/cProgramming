#include <stdio.h>

union IdInfo
{
    int studRollNo;
    int teacherId;
    int staffCode;
};

int main()
{
    union IdInfo Role;


    int choice;
    printf("1.Student\n 2.Teacher\n3.Staff\n");
    printf("Enter choice for select role :\n ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter student Roll No. : ");
        scanf("%d", &Role.studRollNo);
        printf("student Roll no. saved. : %d\n", Role.studRollNo);
        break;

    case 2:
        printf("Enter Teacher Id : ");
        scanf("%d", &Role.teacherId);
        printf("Teacher Id saved. : %d\n", Role.teacherId);
        break;

    case 3:
        printf("Enter Staff code : ");
        scanf("%d", &Role.staffCode);
        printf("Staff code saved. : %d\n", Role.staffCode);
        break;
    default:
        printf("Enter valid choice!!");
        break;
    }

    return 0;
}