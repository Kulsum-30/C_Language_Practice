// Read an int,float,char and print them in required format
#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    char s[100];

    // Read integer and float first
    scanf("%d %f", &a, &b);

    // Read character (space before %c skips whitespace/newline)
    scanf("%c", &c);

    // Read string with spaces until newline
    scanf(" %[^\n]", s);

    // Print results
    printf("integer: %d\n", a);
    printf("float: %.2f\n", b);
    printf("character: %c\n", c);
    printf("string: %s\n", s);

    return 0;
}