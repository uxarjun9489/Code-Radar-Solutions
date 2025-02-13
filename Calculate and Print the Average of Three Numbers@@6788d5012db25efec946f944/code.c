#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%i %i %i" , &a , &b , &c);
    int sum = a + b + c;
    int average = sum/3;
    printf("Average: %d" ,average);
    return 0 ;
    
}