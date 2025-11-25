#include <iostream>
using namespace std;

int main() {
    int N1, N2;
    int soma;
    
    cout << "Digite dois números: ";
    cin >> N1 >> N2;
    
    int menor = N1 < N2 ? N1 : N2;
    int maior = N1 > N2 ? N1 : N2;
    
    for (int i = menor + 1; i < maior; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    
    cout << "SOMA DOS IMPARES = " << soma;
    
    return 0;
}
