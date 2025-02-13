#include <stdio.h>

int main() {
    char str[123];
    char str2[345];
    
    // Read input safely
    scanf("%122s %344s", str, str2);
    
    // Print the entered strings
    printf("You entered: %s and %s\n", str, str2);
    
    return 0;
}
