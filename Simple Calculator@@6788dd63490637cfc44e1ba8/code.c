
#include<stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d%d %c", &a, &b, &op);
    if(op == '+'){
        printf ("%d\n",a+b);
    }
    else if(op == '-'){
        printf("%d\n",a-b);
    }
    else if(op == '*'){
        printf("%d\n",a*b);
    }
    else if (op == '/'){
        if (b!=0){
            printf("%d\n",a / b);
        }
        else {
            printf("error");
        }

    }    
    
}