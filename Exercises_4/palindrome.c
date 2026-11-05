#include<stdio.h>
#include<string.h>

int isPalindrom(const char* string){
		int verification = 1;
		int start = 0;
		int end = strlen(string) - 1;
		
		while(start < end){
				if(string[start] != string[end]){
					verification = 0;
					break;
				}
				start++;
				end--;
		}
		return verification;
}

int main(){
		char string[100];
		printf("Enter word : ");
		scanf("%s",string);
		
		if(isPalindrom(string)){
			printf("%s is palindrom\n",string);
		}
		else{
			printf("%s is not palindrom\n",string);
		}
}