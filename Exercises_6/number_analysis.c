#include<stdio.h>

int sum_digits(int n){
    if(n==0) return 0;
    else return (n%10 + sum_digits(n/10));
}

int count_digits(int n){
    if(n<0) n=-n;
    if(n < 10) 
        return 1;

    return 1 + count_digits(n/10);
}

int reverse_number(int n , int numberDigits){
    int digit = 0;
    int reversed = 0;
    for(int i = 1 ; i <= numberDigits; i++){
        digit = n % 10;
        n /= 10;
        reversed *= 10;
        reversed += digit;
    }
    return reversed;
}

int largest_digit(int n){
    int max = 0;
    int digit = 0;
    while(n>0){
        digit = n % 10;
        n /= 10;
        if(digit > max){
            max = digit;
        }
    }
    return max;
}

int main(){
    int n;
    int sumDigits;
    int digitsCounter;
    int reversedNumber;
    int largestDigit;

    printf("- Veuillez saisir un nombre : ");
    scanf("%d",&n);
    
    sumDigits = sum_digits(n);
    printf("- La somme des digits : %d\n",sumDigits);

    digitsCounter = count_digits(n);
    printf("- Number of digits : %d\n",digitsCounter);

    reversedNumber = reverse_number(n,digitsCounter);
    printf("- Number reversed : %d\n",reversedNumber);

    if(reversedNumber == n){
        printf("- %d is Palindrome\n",n);
    }
    else{
        printf("- %d is not Palindrome\n",n);
    }

    largestDigit = largest_digit(n);
    printf("- Largest digit is : %d",largestDigit);
    return 0;
}