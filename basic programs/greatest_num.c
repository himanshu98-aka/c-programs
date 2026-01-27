#include<stdio.h>
int main(){
    float n1,n2;
    printf("enter the first number : ");
    scanf("%f", &n1);
    
    printf("enter the second number : ");
    scanf("%f", &n2);

    if (n1>n2){
        printf("%.2f is greater than %.2f", n1,n2);
    }
    else if (n2>n1){
        printf("%f is greater%.2f", n2,n2);
    }
    else {
        printf("both values are equal ");
    }
    return 0;