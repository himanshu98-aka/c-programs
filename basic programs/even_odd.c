#include<stdio.h>
int main(){
    int n1;
    printf("enter the first number : ");
    scanf("%d", &n1);
    

    if (n1 % 2 ==0){
        printf("it is an even number");
    }
    else {
        printf("it is an odd number ");
    }

    return 0;
}