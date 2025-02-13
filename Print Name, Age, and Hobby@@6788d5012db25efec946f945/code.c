// Your code here...
#include <stdio.h>
int main(){
    char str1[100];
    int b;
    char str2[100];
    scanf("%99s %d %99s",&str1 , &b , &str2);
    printf("Name: %s \n" , str1);
    printf("Age: %i \n", b);
    printf("Hobby: %s \n", str2);
    return 0 ;
}