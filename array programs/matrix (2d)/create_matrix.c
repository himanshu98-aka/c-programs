#include<stdio.h>


int main(){
    int rn,cn ;
    printf("enetr no. of rows : ");
    scanf("%d", &rn);
    printf("\nenter no. of columns : ");
    scanf("%d", &cn);
    int arr[rn][cn];
    
    for ( int i=0; (i < rn) ; i++ ){
        for ( int j=0; (j < cn) ; j++ ){
            printf("enter value for arr[%d][%d] :",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    for ( int i=0; (i < rn) ; i++ ){
        printf("|");
        for ( int j=0; (j < cn) ; j++ ){
            printf(" %d |",arr[i][j]);  
        }
        printf("\n");
    }

    return 0;
}