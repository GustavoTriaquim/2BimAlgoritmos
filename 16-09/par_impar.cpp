#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int numero = 0;
        
        cout << "Digite um numero: ";
        cin >> numero;
        
        if (numero % 2 == 0 && numero > 0) {
            cout << "PAR POSITIVO" << endl;
        } else if (numero % 2 == 0 && numero < 0) {
            cout << "PAR NEGATIVO" << endl;
        } else if (numero % 2 != 0 && numero > 0) {
            cout << "IMPAR POSITIVO" << endl;
        } else if (numero % 2 != 0 && numero < 0) {
            cout << "IMPAR NEGATIVO" << endl;
        } else {
            cout << "NULO" << endl;
        }
    }
    
    return 0;
}
