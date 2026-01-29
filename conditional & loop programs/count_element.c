#include<stdio.h>

int main(){
    int l[10]={1,2,3,3,4,5,6,5,2,2};
    int n = sizeof(l)/sizeof(l[0]);
    int visited[n];

    for (int i = 0 ; i<n ; i++){
        visited[i]=1;
    }

    for (int i = 0 ; i<n ; i++){
        int count=0;

        if (visited[i]==0){
            continue;
        }

        for (int j = 0 ; j<n ; j++ ){

            if (l[i]==l[j]){
                count++;
                visited[j]=0;
            }
        }
        
        printf("element %d repeated %d times \n",l[i],count);
    }
    return 0;
}