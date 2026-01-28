#include <stdio.h>
int main(){
    int range,l1[10],num,odd=0 , even=0 ;
    char key;

    printf("enter the number of elements  : ");
    scanf("%d", &range); 
    
    for(int i = 0 ; range > i ; i++){
        printf("enter the element  : ");
        scanf("%d", &num);
        l1[i]=num; 
    }

    for(int i = 0 ; range > i ; i++){
        if (l1[i] % 2 == 0){
            even +=1;
        }
        else {
            odd +=1;
        }
    } 

    printf("even = %d \n",even);
    printf("odd = %d",odd);

    return 0;
}