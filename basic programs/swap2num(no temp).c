#include <stdio.h>
int main(){
    int a,b,temp;

    printf("enter the first number : ");
    scanf("%d", &a);

    printf("enter the second number : ");
    scanf("%d", &b);
    printf("number before change a= %d b= %d ",a,b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    
    printf("\nnumber after change a= %d b= %d ",a,b);
    return 0;
}