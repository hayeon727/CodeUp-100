#include <stdio.h>

int main() {
    int x = 1;
    while (x == 0) {
        scanf("%d", &x);
    }
    printf("%d", x);
    
    return 0;
}