#include <stdio.h>

struct foodPoint {
    int id;
    char name[30];
    float price;

};

int main() {
    struct foodPoint menu[3] = {
        {1,"pizza",125.00},
        {2,"Burger",99.00},
        {3,"Americano",250.00}
    };

    printf("--- Welcome to FoodPoint -----\n ");
    printf("Food items :\n");
    for (int i = 0; i < 3 ; i++)
    {
       printf(" %d. %s :- Rs. %.2f \n", menu[i].id , menu[i].name , menu[i].price);
    }
    
    int choice;
    printf("Enter your choice what food item you want to order:\n");
    scanf("%d", &choice );
     
    if( choice >= 1 && choice <= 3){
        printf("you have ordered: %s\n", menu[choice-1].name);
        printf("please pay : %.2f\n", menu[choice-1].price);
        printf("Thanks for your order!\n");


    } else {
        ("Invalid choice!!!\n");
    }



     return 0;
}