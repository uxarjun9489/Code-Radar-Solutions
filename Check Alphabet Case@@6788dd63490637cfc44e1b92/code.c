// Your code here...
#include<Stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if  (a >= 'A' && a <= 'Z'){
        printf("Uppercase");
    }
    else 
        printf("lowercase");
}