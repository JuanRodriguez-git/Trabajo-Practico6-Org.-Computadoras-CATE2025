#include <stdio.h>

int main (void){
    int a = 0;
    int b = 1;
    int c;
    
    printf("%d", a);
    printf("%d", b);

    for(int i = 2; i < 14; i++){

        c = a + b;
        printf("%d", c);
        a = b;
        b = c;

    }
    printf("\n");
}