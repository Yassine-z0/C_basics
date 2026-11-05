#include<stdio.h>

int main(){
    int Operation;
    float Fahrenheit,Celsius;
    
    do{

        printf("- Choisissez l'Operations : \n");
        printf("   1. Celsius    ---> Fahrenheit \n");
        printf("   2. Fahrenheit ---> Celsius \n");
        printf("   3. Quitter\n");
        printf("\nOpeartion number : ");
        scanf("%d",&Operation);

        switch(Operation){
            case 1 :
                printf("Celsius : ");
                scanf("%f",&Celsius);
                Fahrenheit = (Celsius*9/5)+32;
                printf("%.2f Fahrenheit\n",Fahrenheit);
                break;
            case 2 :
                printf("Fahrenheit : ");
                scanf("%f",&Fahrenheit);
                Celsius = (Fahrenheit - 32)*5/9;
                printf("%.2f Celsius\n",Celsius);
                break;
            case 3 :
                printf("Au revoir !\n");
                break;
            default:
                printf("Invalid Operation !\n");
        }
    } while(Operation != 3);
    
    return 0;
}