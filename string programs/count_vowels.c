#include <stdio.h>

int main(){
    int count = 0;
    char ch[50];

    printf("enter the string : ");
    gets(ch);

    for(int i = 0 ; ch[i] != '\0';i++){
        if (ch[i] == 'a'|| ch[i] == 'e'|| ch[i] == 'i'|| ch[i] == 'o'||ch[i] == 'u'||ch[i] == 'A'|| ch[i] == 'E'|| ch[i] == 'I'|| ch[i] == 'O'||ch[i] == 'U' ){
            count++;
        }
    }

    printf("vowel_count = %d",count);

}