#include<stdio.h>
#define N 4
int main(){
    int T[N];
    int elementRech;
    int trouver = 0;
    for(int i = 0; i < N ; i++){
        printf("Valeur %d : ",i+1);
        scanf("%d",&T[i]);
    }

    printf("\nValeur Rechercher : ");
    scanf("%d",&elementRech);

    for(int i = 0; i < N; i++){
        if(T[i] == elementRech){
            trouver = 1;    
            printf("Valide ; Index : %d ; Valeur %d \n",i,T[i]);
            break;
        }
    }
    if(!trouver){
        printf("\nInvalide\n");
    }
    return 0;
}