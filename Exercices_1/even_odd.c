#include<stdio.h>

int main(){
    int Nombre;

    printf("Veuillez saisir un nombre (entier) : ");
    scanf("%d",&Nombre);

    (Nombre%2==0)?
        printf("Ce Nombre : %d est pair",Nombre):
            printf("Ce Nombre : %d est impair",Nombre);
}