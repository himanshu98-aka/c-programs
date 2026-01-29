#include <stdio.h>

int main() {
    int l1[] = {1, 2, 3, 4};
    int l2[] = {6, 7, 8, 9, 10};
    
    int n1 = sizeof(l1) / sizeof(l1[0]);
    int n2 = sizeof(l2) / sizeof(l2[0]);
    
    int l3[n1 + n2];

    for (int i = 0; i < n1 + n2; i++) {
        if (i < n1) {
            l3[i] = l1[i]; 
        } 
        else {
            l3[i] = l2[i - n1]; 
        }
    }

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
       printf("%d ", l3[i]); 
    }  
   
    return 0;
}
