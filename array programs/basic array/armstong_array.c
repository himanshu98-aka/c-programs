#include <stdio.h>
int main(){
    int a[4]={121,153,45,332};
    int n=sizeof(a)/sizeof(a[0]);

    for (int i=0 ; i<n ; i++){

        int num,amg=0, n , temp;
        num=a[i];
        temp=num;
        while(num != 0){
            n =num % 10 ;
            amg += n*n*n ;
            num = num / 10 ;

        }
        if (temp== amg){
            printf("%d is an amstrong number \n",temp);
        }
        else{
            printf("%d is not an amstrong number \n",temp);
        }

    }
    return 0;
}