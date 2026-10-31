#include<stdio.h>

int main(){
    int Tab[]={10,20,30,40,50,60};
    int* ptr = Tab;
    int length = sizeof(Tab)/sizeof(Tab[0]);
    
    printf("Tab[i] = ");
    for(int i = 0 ; i < length ; ++i){
        printf("%d , ",Tab[i]);
    }

    printf("\n*(Tab + i) = ");
    for(int i = 0 ; i < length ; ++i){
        printf("%d , ",*(Tab + i));
    }

    printf("\nptr[i] = ");
    for(int i = 0 ; i < length ; ++i){
        printf("%d , ",ptr[i]);
    }

    printf("\n*(ptr + i) = ");
    for(int i = 0 ; i < length ; ++i){
        printf("%d , ",*(ptr + i));
    }

    return 0;
}