#include<stdio.h>
#include<string.h>
int main(){
    char chaine[100];

    printf("Ecrire : ");
    gets(chaine);

    printf("Resultat : ");
    puts(chaine);

    printf("La longueur : %d",strlen(chaine));
    return 0;
}