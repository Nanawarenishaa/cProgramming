#include <stdio.h>

int main() {
    int rows,cols,rows1,cols1;


    printf("Enter rows and cols for matrix 1 : ");
    scanf("%d %d",&rows,&cols);

   int matrix1[rows][cols];

   printf("Enter values in matrix:\n");
   for( int i = 0 ; i < rows ; i++ ){
    for (int j = 0; j < cols; j++)
    {
         printf("Array[%d][%d]:",i,j);
         scanf(" %d", &matrix1[i][j]);
    
    }
   }

   printf(" Entered matrix:\n");
     for( int i = 0 ; i < rows ; i++ ){
    for (int j = 0; j < cols; j++)
    {
         printf(" %d",matrix1[i][j]);
          
    }
    printf("\n");
    
   }

       printf("Enter rows and cols for matrix 2 : ");
    scanf("%d %d",&rows1,&cols1);
       int matrix2[rows1][cols1];

   printf("Enter values in matrix:\n");
   for( int i = 0 ; i < rows1 ; i++ ){
    for (int j = 0; j < cols1 ; j++)
    {
         printf("Array[%d][%d]:",i,j);
         scanf(" %d", &matrix2[i][j]);
    
    }
   }
   
   printf(" Entered matrix:\n");
     for( int i = 0 ; i < rows1 ; i++ ){
    for (int j = 0; j < cols1 ; j++)
    {
         printf(" %d",matrix2[i][j]);
          
    }
    printf("\n");
    
   }

   if (rows != rows1 || cols != cols1)
   {
       printf("Both matrix rows and cols doesn't match! so fail to multiply! \n");
     
   } else{
   
int result[rows][cols];
   printf("Multiplication of two matrix:\n");
   for (int i = 0 ; i < rows; i++)
   {
     for (int j = 0; j < cols ; j++)
     {
        result[i][j] = matrix1[i][j] * matrix2[i][j];
     }
     
   }
   
  for (int i = 0 ; i < rows; i++)
   {
     for (int j = 0; j < cols ; j++)
     {
        printf("%d ", result[i][j]);
     }
   printf("\n");
   }
    
   }

   printf(" Transpose matrix1:\n");
     int transpose[cols][rows];
  for (int i = 0 ; i < cols ; i++)
   {
     for (int j = 0; j < rows ; j++)
     {
        transpose[i][j]= matrix1[j][i];
        printf("%d ",transpose[i][j]);
     }
   printf("\n");
   }
return 0;

}
