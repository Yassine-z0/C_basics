#include<stdio.h>
void triTab(int T[],int n){
    int tmp;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(T[i] > T[j]){
                tmp = T[j];
                T[j] = T[i];
                T[i] = tmp;
            }
        }
    }
}

int rechDicho(int T[],int start, int end,int x){
    int mid;
    if(start > end){
        return -1;
    }
    else{
        mid = (start + end)/2;
     
        if(x == T[mid]) return 1;
        else if(x>T[mid]) return rechDicho(T,mid+1,end,x);
        else return rechDicho(T,start,mid-1,x);
    }
}

int main(){
    int n;
    printf("Hom many number : ");
    scanf("%d",&n);

    int T[n];
    printf("Fill This Table : \n\n");
    for(int i = 0 ; i < n ; i++){
        printf("Number %d : ", i+1);
        scanf("%d",&T[i]);
    }

    triTab(T,n);

    int numberSearching;
    printf("The number you are searching for : ");
    scanf("%d",&numberSearching);

    int search = rechDicho(T,0,n-1,numberSearching);
    if(search == 1){
        printf("We find it : %d",numberSearching);
    }
    else{
        printf("We didnt find : %d",numberSearching);
    }

    return 0;
}