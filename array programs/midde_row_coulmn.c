#include<stdio.h>
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int row=0;
    int col =0;
    int rn = sizeof(a)/sizeof(a[0]);
    int cn = sizeof(a[0])/sizeof(a[0][0]);

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            if (i==rn/2){
                row+=a[i][j];
            }
        }
    }

    printf("sum of row elements = %d",row);
    printf("\nsum of column elements = %d",col);
    return 0;
    }