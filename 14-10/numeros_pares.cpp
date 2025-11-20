#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;
    
    int VETOR[N];
    
    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> VETOR[i];
    }
    
    cout << "\nNUMEROS PARES:\n";
    
    int pares = 0;
    
    for (int i = 0; i < N; i++) {
        if (VETOR[i] % 2 == 0) {
            pares ++;
            cout << VETOR[i] << " ";
        }
    }
    
    cout << "\nQUANTIDADE DE PARES: " << pares;
    
    return 0;
}
