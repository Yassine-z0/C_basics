#include<stdio.h>

int fact(int x){
		if(x==0 || x==1) return 1;
		else return x*fact(x-1);
}



int main(){
		int x;
		
		printf("Veuillez saisir un nombre pour calculer leur factorielle : ");
		scanf("%d",&x);
		
		printf("Factorielle de %d! = %d",x,fact(x));
    return 0;
}

