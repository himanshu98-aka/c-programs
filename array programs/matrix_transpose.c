#include<stdio.h>


int main(){
    int arr[2][3]={1,2,3,4,5,6};
    int transpose[3][2];

    for ( int i=0; (i < 2) ; i++ ){
        printf("|");
        for ( int j=0; (j < 3) ; j++ ){
            printf(" %d |",arr[i][j]);
            transpose[i][j]=  arr[j][i];
        }
        printf("\n");
    }
    for ( int i=0; (i < 3) ; i++ ){
        printf("|");
        for ( int j=0; (j < 2) ; j++ ){
            printf(" %d |",transpose[i][j]);  
        }
        printf("\n");
    }

    return 0;
}