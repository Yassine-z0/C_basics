#include <stdio.h>

int main(void) {
	int N;

    printf("N = ");
    scanf("%d",&N);

    ((N%3 == 0) && (N%13 == 0))?printf("%d divisible par 3 et 13",N):printf("%d pas divisible par 3 et 13",N);
}
