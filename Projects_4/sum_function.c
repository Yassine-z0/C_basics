#include<stdio.h>

int somme(int x, int y){
		return x + y;
}



int main(){
		int x,y;
		
		printf("Veuillez saisir deux nombre pour calculer leur somme : ");
		scanf("%d%d",&x,&y);
		
		printf("La somme : %d",somme(x,y));
    return 0;
}