#include<stdio.h>

int maxTab(int *T,int n){
    int max = *T;
    for(int i = 1; i < n; i++){
        if(max <= *(T+i)){
            max = *(T+i);
        }
    }
    return max;
}


int main(){
    int n;
    printf("How many numbers : ");
    scanf("%d",&n);

    int T[n];
    printf("- Enter numbers : \n\n");
    for(int i = 0; i < n; i++){
        printf("Number %d : ",i+1);
        scanf("%d",&T[i]);
    }

    int max = maxTab(T,n);

    printf("Max = %d",max);
    return 0;
}
