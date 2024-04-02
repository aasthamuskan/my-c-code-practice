#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;  // 0 and 1 are not prime
   if (n == 2) return 1;  // 2 is prime

    // Check divisibility from 2 to square root of n
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) return 0;  // n is divisible by i, not prime
    }

    return 1;  // n is prime
}

void generatePrimeSeries(int n) {
    printf("Prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d",&n);  
    generatePrimeSeries(n);

    return 0;
}
