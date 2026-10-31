#include<stdio.h>

int main(){
    int i;
    int N;

    printf("Saisir un nombre : ");
    scanf("%d",&N);
    printf("La table de multiplication de %d : \n",N);
    for(i = 0 ; i <= 11 ; i++){
        printf("%d x %d = %d\n",N,i,N*i);
    }
    return 0;
}