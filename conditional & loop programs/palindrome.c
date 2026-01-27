#include <stdio.h>
int main(){
    int num,rev = 0,temp,l_digit;

    printf("enter the number to check : ");
    scanf("%d", &num);  
    temp=num;
    while(num != 0){
        l_digit =  num % 10 ;
        rev     =  (rev*10) + l_digit ;
        num     =  num / 10 ;

    }
    if (rev == temp ){
        printf("yes,  it is an palindrome ");
    }
    else {
        printf("no, it is not palindrome ");
    }
    return 0;
}