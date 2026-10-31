#include<stdio.h>

void inverser(int *T, int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = T[i];
        T[i] = T[n-1-i];
        T[n-1-i] = temp;
    }
}

int main(){
    int T[5] = {10,20,30,40,50};
    int n = sizeof(T)/sizeof(T[0]);
    
    printf("Before : \n");
    for(int i = 0 ; i < n ; i++){
        printf("%d  ",T[i]);
    }
    
    inverser(T,n);
    printf("\nAfter : \n");

    for(int i = 0 ; i < n ; i++){
        printf("%d  ",T[i]);
    }
    return 0;
}