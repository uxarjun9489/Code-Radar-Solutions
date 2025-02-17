#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    scanf("%d %d", &a, &b);

    // Check if a is greater than or equal to b
    if (a >= b)
        printf("True\n");
    else 
        printf("False\n");

    return 0;
}
