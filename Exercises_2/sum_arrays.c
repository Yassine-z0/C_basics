#include<stdio.h>
#define MAX 4
int main(){
    int Tab1[MAX]={1,2,3,4};
    int Tab2[MAX]={5,6,7,8};
    int Tab3[MAX];

    for (int i = 0; i < MAX; i++){
        Tab3[i]=Tab1[i]+Tab2[i];
    }
    printf("Resultat : ");
    for (int i = 0; i < MAX; i++){
        printf("%d ",Tab3[i]);
    }
    
    printf("\n");
    return 0;
}