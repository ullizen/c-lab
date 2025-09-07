#include <stdio.h>

int main() {
    printf("----------------\n");
    printf("Hello variables!\n");
    printf("----------------\n");
    int a = 5; // 2 or 4 bytes
    float b = 3.5; // 4 bytes, 6 or 7 digits precision
    char c = 'C'; // 1 byte, must use single quotes
    double d  = 2.7; // 8 bytes, 15 digits precision
    char e = 87; // ASCII value for W
    char f[] = "Mipu";
    int g = 76e3; // Scientific notation, same as 76 * 10^3 = 76000

    // Print different types of variables
    printf("int a: %d", a);
    printf("\n");
    printf("float b: %f", b);
    printf("\n");
    printf("char c: %c", c);
    printf("\n");
    printf("double d: %lf", d);
    printf("\n");
    printf("char e: %c", e);
    printf("\n");
    printf("string f: %s", f);
    printf("\n");
    printf("int g: %d", g);
    printf("\n");
    printf("----------------\n");

    // Print different types combined
    printf("int a is %d, and char c is %c\n", a, c);
    printf("----------------\n");

    // Print different decimal precision
    printf("double d with 1 decimal: %.1lf\n", d);
    printf("float b with 2 decimals: %.2f\n", b);
    printf("----------------\n");

    // Print size of different types
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu bytes\n", sizeof(c));
    printf("Size of double: %zu bytes\n", sizeof(d));
    printf("Size of string: %zu bytes\n", sizeof(f));
    printf("Size of scientific notation int: %zu bytes\n", sizeof(g));
    printf("----------------\n");

    // Convert between types
    float q = a / b;
    printf("int a / float b = float q: %f\n", q);

    float q2  = (float) 5 / 2;
    printf("float q2 = (float) 5 / 2: %f\n", q2);

    char h = (char) 87.2; // Implicit conversion from float to char
    printf("char h = float b: %c\n", h);

    int i = c; // Implicit conversion from char to int (ASCII value)
    printf("int i = char c: %d\n", i);
    printf("----------------\n");

    // A note on constants
    const int CONSTANT = 10; // uppercase by convention
    printf("Constant value, cannot be reassigned: %d\n", CONSTANT);
    // CONSTANT = 15; // This will cause a compilation error if uncommented

    printf("----------------\n");
    printf("Good bye!\n");
    printf("----------------\n");
    
    return 0;
}