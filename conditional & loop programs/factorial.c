#include <stdio.h>
int main(){
    int num,f=1;

    printf("enter the number for factorial : ");
    scanf("%d", &num);  
    
    for (int i = 1 ; i <= num; i++){
        f*=i;     
    }
    printf("factorial = %d ", f);
    return 0;
}