#include<stdio.h>
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};  // 0 1 1
    int sum=0;                        // 0 0 1    1 elements = upper triangle
    for(int i=0 ; i<3 ; i++){         // 0 0 0
        for(int j=0 ; j<3 ; j++){
            if (i>=j){
                sum+=a[i][j];
            }
            
        }
    }
    printf("sum of all elements of upper triangle = %d",sum);
    return 0;
    }