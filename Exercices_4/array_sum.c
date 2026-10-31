#include<stdio.h>
int somme(int T[],int n){
    int somme = 0;
    for(int i = 0; i < n; i++){
        somme += T[i];
    }
    return somme;
}

int main(){
    int T[5];
    int n = 5;
    printf("- Enter numbers : \n\n");
    for(int i = 0; i < n; i++){
        printf("Number %d : ",i+1);
        scanf("%d",&T[i]);
    }

    int S = somme(T,n);

    printf("La somme des elements de tableau : S = %d",S);
    return 0;
}