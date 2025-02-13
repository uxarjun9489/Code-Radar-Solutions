Loading Code...#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scan f ("%i %i %i" , &a , &b , &c);
    int sum = a + b + c;
    int average = sum / 3;
    print f ("Average: %d" , average );
    return 0 ;
    
}