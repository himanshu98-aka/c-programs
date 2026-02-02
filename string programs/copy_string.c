#include <stdio.h>

int main(){
    int count = 0,i;
    char ch[50],cpy[50];

    printf("enter the string : ");
    fgets(ch , sizeof(ch) , stdin);

    for( i = 0 ; ch[i] != '\0';i++){
        cpy[i]=ch[i];
    }
    ch[i]='\0';
    for(int i = 0 ; ch[i] != '\0';i++){
        printf("%c", cpy[i]);
    }
}