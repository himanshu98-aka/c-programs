#include<stdio.h>

int main(){
    int choice;
    float a ,b ;
    printf("enter the first number : ");
    scanf("%f", &a); 
    printf("enter the second number : ");
    scanf("%f", &b); 
    printf(" 1. addition \n 2. subtract \n 3. multiply \n 4. divide \nchoose from the given options :  ");
    scanf("%d", &choice);

    switch (choice){
        case (1): printf("addition = %.2f",(a+b)); break;
        case (2): printf("subtraction = %.2f",(a-b)); break;
        case (3): printf("multipication = %.2f",(a*b)); break;
        case (4): printf("division = %.2f",(a/b)); break;
        default : printf(" enter the valid input !!");
    }
    return 0;
}