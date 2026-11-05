#include<stdio.h>
int M(int n);
int F(int n){
    if(n == 0) return 1;
    else return n-M(F(n-1));
}
int M(int n){
    if(n == 0) return 0;
    else return n-F(M(n-1));
}

int main(){
    int n;

    printf("Entrer n : ");
    scanf("%d",&n);
    printf("F(%d) = %d \n",n,F(n));
    printf("M(%d) = %d \n",n,M(n));

    return 0;
}