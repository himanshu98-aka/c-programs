#include<stdio.h>
int main(){
    int a[2][2]={1,2,0,4};
    int count=0;
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            if (a[i][j]==0) {
                count++;
            }
        }
    }
    printf("number of zeroes = %d",count);
    return 0;
    }