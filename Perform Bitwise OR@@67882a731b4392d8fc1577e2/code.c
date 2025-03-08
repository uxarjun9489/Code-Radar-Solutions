#include <stdio.h>
int main(){
    int a,b,result;
    scanf("%d%d" , &a , &b);
    result = a | b;
    printf("Result of %d | %d = %d\n", a , b ,result);
}