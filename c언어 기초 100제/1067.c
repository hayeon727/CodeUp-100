#include <stdio.h>

int main() {
    
    int a;
    scanf("%d", &a);
    
    if (a > 0) {
        if (a % 2 == 0) {
            printf("plus\neven");
        }
        else{
            printf("plus\nodd");
        }
    }
    else if (a < 0) {
        if (a % 2 == 0) {
            printf("minus\neven");
        }
        else {
            printf("minus\nodd");
        }
    }
    
    return 0;
}