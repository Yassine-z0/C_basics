#include<stdio.h>

int main(){
    char nom[20];

    printf("Veuillez saisir votre nom : ");
    gets(nom);
    
    printf("Votre nom est : ");
    puts(nom);
    return 0;
}