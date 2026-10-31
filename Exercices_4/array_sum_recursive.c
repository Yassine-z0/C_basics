#include<stdio.h>

int sommeRec(int *T,int n){
    if(n == 0) return 0;
    else return T[0]+sommeRec(T+1,n-1);
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

    int somme = sommeRec(T,n);
    printf("Somme = %d",somme);
    return 0;
}
