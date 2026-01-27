#include <stdio.h>
int main(){
    int num,sum = 0;

    printf("enter the number : ");
    scanf("%d", &num);  
    
    for (int i = 1 ; i <= num; i++){
        sum+=i;
    }
    printf("sum of n numbers : %d", sum);
    return 0;
}