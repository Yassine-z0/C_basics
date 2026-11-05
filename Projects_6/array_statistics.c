#include<stdio.h>

void display_array(int T[],int n){
    printf("Elements : ");
    for(int i = 0; i < n; i++){
        printf("%d ",T[i]);
    }
}

void reverse_array(int T[], int n){
    int tmp,start,end=n-1;

    for(start = 0; start < n/2 ; start++){
        tmp = T[start];
        T[start] = T[end-start];
        T[end-start] = tmp;
    }
}

int sum_array(int T[], int n){
    int sum = 0;
    for(int start = 0; start < n; start++){
        sum += T[start];
    }
    return sum;
}

int min_array(int T[],int n){
    int min = T[0];
    for(int start = 1; start < n; start++){
        if(T[start] < min){
            min = T[start];
        }
    }
    return min;
}

int max_array(int T[],int n){
    int max = T[0];
    for(int start = 1; start < n; start++){
        if(T[start] > max){
            max = T[start];
        }
    }
    return max;
}

int secMax_array(int T[],int n,int max){
    int secMax = max;
    int found = 0;
    for(int start = 0; start < n; start++){
        if(T[start] < max){
            if(found == 0 || T[start] > secMax){
                secMax = T[start];
                found = 1;
            }
        }
    }
    return secMax;
}

int even_count(int T[], int n){
    int evenCounter = 0;
    for(int start = 0; start < n ; start++){
        if(T[start] % 2 == 0){
            evenCounter += 1;
        }
    }
    return evenCounter;
}

int odd_count(int T[] , int n){
    int oddCounter = 0;
    for(int start = 0; start < n ; start++){
        if(T[start] % 2 != 0){
            oddCounter += 1;
        }
    }
    return oddCounter;

}

int main(){
    int n;
    
    printf("Enter n : ");
    scanf("%d",&n);
    
    int T[n];
    printf("Fill the table by %d elements : \n",n);
    for(int i = 0; i < n; i++){
        printf("Element %d : ",i+1);
        scanf("%d",&T[i]);
    }
    
    int sumArray;
    float avgArray;
    int minArray;
    int maxArray;
    int secMaxArray;
    int evenCount;
    int oddCount;
    printf("\n-----------------\n");

    reverse_array(T,n);
    display_array(T,n);
    
    sumArray = sum_array(T,n);
    avgArray = (float) sumArray/n;
    printf("\nSum : %d\n",sumArray);
    printf("Average : %.2f\n",avgArray);

    minArray = min_array(T,n);
    printf("Minimum : %d\n",minArray);

    maxArray = max_array(T,n);
    printf("Maximum : %d\n",maxArray);

    secMaxArray = secMax_array(T,n,maxArray);
    printf("Second largest : %d\n",secMaxArray);

    evenCount = even_count(T,n);
    printf("Even : %d\n",evenCount);

    oddCount = odd_count(T,n);
    printf("Odd : %d\n",oddCount);
    return 0;
}