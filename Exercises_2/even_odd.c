#include<stdio.h>

int main(){
    int Nombre;
    printf("Saisir un nombre : ");
    scanf("%d",&Nombre);

    if(Nombre%2==0)
        goto pair;
    else{
        goto impair;
    
    pair:
        printf("Le nombre %d est pair \n",Nombre);
        goto end;
    impair:
        printf("Le nombre %d est impair \n",Nombre);
        goto end;
    }
    end : 
        return 0;
}