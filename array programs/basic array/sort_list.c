#include <stdio.h>
int main(){
    int n,l[10],temp,num ;

    printf("enter the number of elements  : ");
    scanf("%d", &n); 
    for(int i = 0 ; n > i ; i++){
        printf("enter the element  : ");
        scanf("%d", &num);
        l[i]=num; 
    }
    
    for(int i = 0 ; n > i ; i++){
        for (int j = 0 ; n > j ; j++){
            if (l[i] < l[j]){     
                temp=l[j];
                l[j]=l[j+1];
                l[j+1]=l[i];
            }
        }
    }
    for(int i = 0 ; n > i ; i++){
        printf("%d",l[i]);
    }
    return 0;
}