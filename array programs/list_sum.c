#include <stdio.h>
int main(){
    int range,l[10],num,sum=0 ;

    printf("enter the number of elements  : ");
    scanf("%d", &range); 
    
    for(int i = 0 ; range > i ; i++){

        printf("enter the element  : ");
        scanf("%d", &num);
        l[i]=num; 
    }
    for(int i = 0 ; range > i ; i++){
        sum+=l[i];     
    }  
    printf("sum = %d", sum);
    return 0;
}