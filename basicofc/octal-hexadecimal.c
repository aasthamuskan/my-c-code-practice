#include <stdio.h>

int main() {
    int number;

    printf("Enter a numeric value: ");
    scanf("%d", &number);

    printf("In octal: %o\n", number);

    printf("In hexadecimal: %X\n", number);

    return 0;
}
