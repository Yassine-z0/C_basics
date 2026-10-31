#include<stdio.h>

int main(){
    int Nombre;
    int Factoriel = 1;
    int i = 1; 
    printf("Saisir un nombre : ");
    scanf("%d",&Nombre);

    while(i<=Nombre){
        Factoriel *= i;
        i++;
    }
    printf("%d! = %d",Nombre,Factoriel);
    return 0;
}