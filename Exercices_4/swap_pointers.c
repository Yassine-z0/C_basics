#include<stdio.h>

void permuter(int* a,int* b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}



int main(){
int x = 5,y = 10;

permuter(&x,&y);

printf("%d %d",x,y);
    return 0;
}