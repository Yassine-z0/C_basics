#include <stdio.h>

int main() {
    printf("Program started!\n");

    int Tab[] = {10, 20, 30, 40};
    Tab[2] = 5;
    Tab[0] = 2;
    Tab[2] = Tab[1];

    printf("%zu\n", sizeof(Tab));

    int length = sizeof(Tab) / sizeof(Tab[0]);

    for (int i = 0; i < length; i++) {
        printf("%d ", Tab[i]);
    }

    printf("\n");
    return 0;
}