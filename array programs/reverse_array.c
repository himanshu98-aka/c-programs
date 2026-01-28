#include <stdio.h>
int main(){
    int range,l1[10],num ;

    printf("enter the number of elements  : ");
    scanf("%d", &range); 
    
    for(int i = 0 ; range > i ; i++){

        printf("enter the element  : ");
        scanf("%d", &num);
        l1[i]=num; 
    }
    for(int i = range-1 ; i >= 0 ; i--){
        printf("%d ", l1[i]);

    }
    return 0;
}