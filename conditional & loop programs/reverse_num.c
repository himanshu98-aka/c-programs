#include <stdio.h>
int main(){
    int num,rev=0,l_digit;

    printf("enter the number for factorial : ");
    scanf("%d", &num);  
    
    while(num != 0){
        l_digit=num % 10 ;
        rev = (rev * 10) + l_digit ;
        num = num / 10 ;

    }
    printf(" reversed number = %d", rev);
    return 0;
}