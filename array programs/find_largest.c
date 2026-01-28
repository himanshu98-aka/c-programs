#include <stdio.h>
int main(){
    int range,l[10],num,max ;

    printf("enter the number of elements  : ");
    scanf("%d", &range); 
    
    for(int i = 0 ; range > i ; i++){

        printf("enter the element  : ");
        scanf("%d", &num);
        l[i]=num; 
    }
    for(int i = 0 ; range > i ; i++){
        num = l[i];
        if (num >max){
            max=num;
        }
    }  
    printf("max = %d", max);
    return 0;
}