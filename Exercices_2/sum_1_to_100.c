#include<stdio.h>

int main(){
    int i;
    int S=0;
    for(i = 1 ; i <= 100 ; ++i){
        S+=i;
    }
    printf("La somme de 1 a 100 : %d",S);
    return 0;
}