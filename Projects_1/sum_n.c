#include<stdio.h>

int main(){
    int Nombre;
    int i = 1;
    int Somme=0;

    printf("Saisir un nombre : ");
    scanf("%d",&Nombre);

    while(i<=Nombre){
        Somme += i;
        i++;
    }
    printf("La somme de %d premier entier : %d",Nombre,Somme);

    return 0;
}