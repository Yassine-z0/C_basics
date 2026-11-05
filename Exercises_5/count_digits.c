#include<stdio.h>

int nbChiffres(int n){
    if(n < 0) n = -n;
    if(n < 10) return 1;
    else return 1+nbChiffres(n/10);
}

int main(){
    int n;

    printf("Enter number : ");
    scanf("%d",&n);

    printf("Number of chiffre : %d",nbChiffres(n));

    return 0;
}