#include <iostream>
using namespace std;

int main() {
    int N1, N2;
    int soma;
    
    cout << "Digite dois números: ";
    cin >> N1 >> N2;
    
    for (int i = N1 + 1; i < N2; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    
    for (int i = N2 + 1; i < N1; i++) {
        if (i % 2 != 0) {
            soma += 1;
        }
    }
    
    cout << "SOMA DOS IMPARES = " << soma;
    
    return 0;
}
