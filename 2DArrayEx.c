#include <stdio.h>

int main() {
    int arr[2][3] = {{1,2,3},{4,5,6}};
    printf("2D Array:\n");
    for( int i = 0 ; i < 2 ; i++ ) {
        for ( int j = 0 ; j < 3 ; j++ ){
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }


    int rows,cols;
    int rows2, cols2;
    printf("Enter rows and cols for matrix :  ");
    scanf("%d %d" , &rows,&cols);
    
    int matrix[rows][cols];
    
    for( int i = 0 ; i < rows ; i++ ){
        for( int j = 0 ; j < cols ; j++ ){
            printf("Array[%d][%d]: " ,i, j );
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Enter 2nd matrix rows and cols:");
    scanf("%d %d",&rows2,&cols2);

    int matrix2[rows2][cols2];

    for(int i = 0 ; i < rows2 ; i++ ){
        for( int j = 0 ; j < cols2 ; j++){
            printf("Array[%d][%d]: ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }



   printf("Entered 1st matrix : \n");
    for (int i=0 ; i < rows; i++){
        for(int j = 0 ; j < cols ; j++ ){
            printf(" %d", matrix[i][j]);

        }
        printf("\n");
    }
    
       printf("Entered 2nd matrix : \n");
    for (int i=0 ; i < rows2; i++){
        for(int j = 0 ; j < cols2 ; j++ ){
            printf(" %d", matrix2[i][j]);

        }
        printf("\n");
    }
    if (rows != rows2 || cols != cols2){
        return -1;
    } else {

        int result[rows][cols];
        printf("multiplication of matrix :\n");
       for (int i=0 ; i <rows;i++){
            for(int j = 0 ; j < cols ; j++ ){
              result[i][j]= matrix[i][j] * matrix2[i][j];
    
            }
            printf("\n");
        }
    
           for (int i=0 ; i <rows;i++){
            for(int j = 0 ; j < cols ; j++ ){
        printf(" %d",result[i][j]);
            }
        }
    }

    

       printf("transpose matrix: \n");
    for (int i=0 ; i < cols ; i++){
        for(int j = 0 ; j < rows ; j++ ){
            printf(" %d", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}