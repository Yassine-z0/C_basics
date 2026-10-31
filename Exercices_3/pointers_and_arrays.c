#include<stdio.h>

int main(){
    int Tab[5]={10,20,30,40,50};
    int* ptr = Tab;

    printf("La taille du Tab : %zu\n",sizeof(Tab));
    printf("La taille du ptr : %zu\n",sizeof(ptr));

    return 0;
}