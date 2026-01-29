#include <stdio.h>
int main(){
    int range,l1[10],l2[10],num ;

    printf("enter the number of elements  : ");
    scanf("%d", &range); 
    
    for(int i = 0 ; range > i ; i++){

        printf("enter the element  : ");
        scanf("%d", &num);
        l1[i]=num; 
    }
    
     for(int i = 0 ; range > i ; i++){
        l2[i]=l1[i]; 
    }

    for(int i = 0 ; range > i ; i++){
        printf("%d ",l2[i]); 
    }
    return 0;
}