#include <stdio.h>

int main() {
    int x [5]= {1, 2, 3, 4, 5};
    int * ptr = x;
    
    printf("%d", *(ptr + 3));
    return 0;
}