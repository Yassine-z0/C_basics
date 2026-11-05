#include<stdio.h>
#include<string.h>
int main(){
    char chaine1[100];
    char chaine2[100];

    printf("Ecrire : ");
    gets(chaine1);

    printf("On a copy vers chaine2 , resultat : %19s",strcpy(chaine2,chaine1));
    

    return 0;
}