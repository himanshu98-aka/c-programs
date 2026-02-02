#include <stdio.h>
int main(){
    int range,l1[10],num,found=0 ,position ;
    char key;

    printf("enter the number of elements  : ");
    scanf("%d", &range); 
    
    for(int i = 0 ; range > i ; i++){
        printf("enter the element  : ");
        scanf("%d", &num);
        l1[i]=num; 
    }
    printf("enter the element to search  : ");
    scanf("%d", &key);

    for(int i = 0 ; range > i ; i++){
        if (l1[i]==key){
            found=1;
            position=i+1;
        }
    } 
    if (found){
        printf("yes , it found on %d position",position);
        }
    else{
        printf("not found");
    }
    return 0;
}