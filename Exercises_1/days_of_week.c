#include<stdio.h>

int main(){
    int Jour;

    printf("Nombre de Jour (1 a 7) : ");
    scanf("%d",&Jour);

    if(Jour == 1){
        printf("Dimanche");
    }
    else if(Jour == 2){
        printf("Lundi");
    }
    else if (Jour == 3){
        printf("Mardi");
    }
    else if (Jour == 4){
        printf("Mercredi");
    }
    else if (Jour == 5){
        printf("Jeudi");
    }    
    else if (Jour == 6){
        printf("Vendredi");
    }
    else if (Jour == 7){
        printf("Samedi");
    }
    else{
        printf("Invalid Jour !");
    }

    return 0;
}