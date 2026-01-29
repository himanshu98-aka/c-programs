#include <stdio.h>
int main(){
    int num, f=1 ,temp ,l_digit ;

    printf("enter the number for factorial : ");
    scanf("%d", &num);  
    
    temp=num;
    int total=0;

    while(num != 0){
        l_digit =  num % 10 ;

        for (int i = 1 ; i <= l_digit; i++){  f*=i; }
        total+=f;
        num  =  num / 10 ;
        f=1 ;
    }
    
    if (temp==total){
        printf("it is a strong number");
    }
    else{
        printf("it is not a strong number");
    }
    
    return 0;
}