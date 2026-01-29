#include <stdio.h>
int main(){
    int a,b =1,c;

    printf("enter the first number : ");
    scanf("%d", &a); 
    printf("enter the second number : ");
    scanf("%d", &b); 

    int n1=a;
    int n2=b;

    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }

    int gdc = a;
    int lcm = (n1 * n2)/ gdc ;

    printf("lcm = %d \n",lcm);
    printf("gdc = %d",gdc);

    return 0;
}