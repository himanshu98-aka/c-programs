#include<stdio.h>
int main(){
    int c[2][2] ;

    int a[2][2]={1,2,3,4};
    int b[2][2]={1,2,3,4};

    for(int i=0 ; i<2 ; i++){
        printf("|");

        for(int j=0 ; j<2 ; j++){
            c[i][j]= a[i][j] + b[i][j];
            printf(" %d |",c[i][j]);
        }
        
        printf("\n");
    }

    return 0;
    }