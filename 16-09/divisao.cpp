#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    
    cout << "Quantos casos voce vai digitar? ";
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        double numerador, denominador, resultado = 0;
        
        cout << "Entre com o numerador: ";
        cin >> numerador;
        
        cout << "Entre com o denominador: ";
        cin >> denominador;
        
        if (denominador == 0) {
            cout << "DIVISAO IMPOSSIVEL" << endl;
        } else {
            resultado = numerador / denominador;
            cout << "DIVISAO = " << resultado << endl;
        }
    }
    
    return 0;
}
