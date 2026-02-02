#include <stdio.h>
int main(){
    int num,amg=0, n , temp;

    printf("enter the number  : ");
    scanf("%d", &num);  
    temp=num;
    while(num != 0){
        n =num % 10 ;
        amg += n*n*n ;
        num = num / 10 ;

    }
    if (temp== amg){
        printf("yes, it is an amstrong number ");
    }
    else{
        printf("No, it is not an amstrong number ");
    }
    return 0;
}