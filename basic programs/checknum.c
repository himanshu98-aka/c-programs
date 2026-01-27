#include<stdio.h>
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d", &a);
    

    if (a>0){
        printf("it is an positive number");
    }
    else if (a<0){
        printf("it is an negative number");
    }
    else {
        printf("it is an zero ");
    }

    return 0;
}