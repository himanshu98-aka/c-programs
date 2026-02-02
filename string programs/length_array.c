#include <stdio.h>

int main(){
    int i=0 ;
    char ch[50];

    printf("enter the string : ");
    fgets(ch, sizeof(ch), stdin);

    while (ch[i] != '\0'){
       
        i++;
    }
    printf("character length =  = %d",i-1);

}