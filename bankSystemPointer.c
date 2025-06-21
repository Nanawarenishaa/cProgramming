#include <stdio.h>

void deposit(int *balance, int amount ){
   *balance += amount;
}

void withdraw(int *balance , int amount){
    if( *balance <= amount){
        printf("inefficient amount for withdraw!");

    } else {
        *balance -= amount;
    }
}



int main(){
 int balance =2000;

  printf(" balance in account: Rs.%d\n", balance);

 deposit( &balance ,1000);
 printf(" balance after deposit : RS.%d", balance);
 
  withdraw( &balance , 1500);
 printf(" balance after withdraw : Rs.%d", balance);

 printf("Final amount : Rs.%d", balance);
return 0;
}