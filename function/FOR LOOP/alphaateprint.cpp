#include <iostream>
using namespace std;

void printAlphabet(int N) {
    for (int i = 0; i < N; i++) {
        cout << char('a' + i) << " ";
    }
}

int main() {
    int N;
    cin >> N; 
    printAlphabet(N); 
    return 0;
}
