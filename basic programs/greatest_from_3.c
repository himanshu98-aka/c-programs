#include<stdio.h>
int main(){
    float n1,n2,n3;
    printf("enter the first number : ");
    scanf("%f", &n1);
    
    printf("\nenter the second number : ");
    scanf("%f", &n2);
    
    printf("\nenter the third number : ");
    scanf("%f", &n3);

    if (n1>n2){
        
        if (n1>n3){
            printf("\n %.2f is greater ",n1);
        }
        else {
            printf("\n %.2f is greater ",n3);
            }
            
        
    }
    else if(n2>n1){
        
        if (n2>n3){
            printf("\n %.2f is greater ",n2);
        }
        else{
            printf("\n %.2f is greater ",n3);
        }
    }
    
    else{
        printf("\n given all values are equal ");
    }
    return 0;
}