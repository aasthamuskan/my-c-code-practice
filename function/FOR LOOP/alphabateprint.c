#include <stdio.h>

void printAlphabet(int N) {
    for (int i = 0; i < N; i++) {
        printf("%c ", 'a' + i);
    }
}

int main() {
    int N;
    scanf(" input %d", &N); // Input
    printAlphabet(N); // Output
    return 0;
}
