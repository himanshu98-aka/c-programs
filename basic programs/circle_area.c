#include <stdio.h>
int main(){
    float r,area,pie;

    printf("enter the value of radius : ");
    scanf("%f", &r);   
    pie = 3.14;
    
    area = pie*(r*r);

    printf("area of circle : %.2f ", area);

    return 0;
}