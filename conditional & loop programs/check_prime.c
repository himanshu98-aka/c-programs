#include <stdio.h>
int main(){
    int num ,prime = 0;

    printf("enter the number : ");
    scanf("%d", &num);  
    if (num<=1){
        prime=1;
    }
    for (int i = 2; i <=num/2 ;i++){
        if (num % i == 0){
            prime = 1;
            break;
        }
    }
    
    if (prime = 0){
        printf("yes, it is a prime number");
    }
    else{
        printf("no , it is not a prime number");
    }
    return 0;
}