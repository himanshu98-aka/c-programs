#include <stdio.h>
int main(){
    int year ;

    printf("enter the year you have to check : ");
    scanf("%d", &year);   
    
    if (year % 100 != 0 && year % 4 ==0 || year % 400 == 0 ){

        printf("Yes, %d is an leap year", year);
    
    }
    else{
        printf("No, %d is not an leap year", year);
    }
    return 0;
}