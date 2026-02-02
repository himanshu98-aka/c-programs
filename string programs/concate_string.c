#include <stdio.h>

int main(){
    int count = 0,i;
    char a[50],b[50] , c[100];

    printf("enter the string 1 : ");
    fgets(a, sizeof(a) , stdin);

    printf("enter the string 2 : ");
    fgets(b, sizeof(b) , stdin);

    for(int i = 0 ; a[i] != '\0';i++){
        c[i]=b[i] ;
    }
    for(int i ; c[i] != '\0';i++){
        c[i]=b[i] ;
        
    }
    c[i]='\0';
    for(int i = 0 ; c[i] != '\0';i++){
        printf("%c", c[i]);
    }


}