// Your code here...
#include <stdio.h>
int main(){
    int a , b;
    scanf("%d%d",&a,&b);
    if  (a < b)
        printf("True\n");
    else if(a > b)
        printf("False\n");
    else
        printf("False");
    return 0;
}