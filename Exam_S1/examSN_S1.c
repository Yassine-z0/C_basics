#include<stdio.h>

void saisirTableau(int T[],int N){
    for(int i = 0; i < N; i++){
        printf("Nombre %d : ",i+1);
        scanf("%d",&T[i]);
    }
}

int rechercheOccurences(int T[],int N,int x){
    int counter = 0;
    for(int i = 0 ; i < N ; i++){
        if(T[i] == x){
            counter++;
            printf("Dans l'indice %d \n",i+1);
        }
    }
    return counter;
}

int main(){
    int T[100];
    int N;
    int x;

    printf("Saisir une taille : ");
    scanf("%d",&N);

    printf("Remplir tableau : \n");
    saisirTableau(T,N);
    printf("Saisir nombre dans le tableau pour calculer nombre d'occurence : ");
    scanf("%d",&x);
    int occurences = rechercheOccurences(T,N,x);

    if(occurences == 0){printf("%d n'existe pas dans le tableau !",x);}
    else
        printf("Nombre d'occurences : %d",occurences);

    return 0;
}