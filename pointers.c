#include <stdio.h>

int main() {
    printf("Hello pointers! \n");

    int x = 3;
    int *p = &x;

    printf("Value of x: %d\n", x);
    printf("Value of *p: %d\n", *p);
    printf("Address of &x: %p\n", &x);
    printf("Address of &*p: %p\n", &*p);
    printf("Address of p: %p\n", p);
    return 0;
}
