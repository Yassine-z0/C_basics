#include<stdio.h>


int longueurRec(char* chaine){
    if(*chaine == '\0') return 0;
    else{
        return 1+longueurRec(chaine+1);
    }
}

int main(){
    char chaine[100];
    printf("Veuillez saisir une chaine : ");
    scanf("%99s",chaine);

    int longueur = longueurRec(chaine);
    printf("longueur : %d",longueur);
    return 0;
}