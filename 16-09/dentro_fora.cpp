#include <iostream>
using namespace std;

int main() {
    int N;
    int dentro, fora = 0;
    
    cout << "Quantos números vc vai digitar? ";
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int numero = 0;
        
        cout << "Digite um numero: ";
        cin >> numero;
        
        if (numero < 10 || numero > 20){
            fora++;
        } else {
            dentro++;
        }
    }
    
    cout << fora << " FORA" << endl;
    cout << dentro << " DENTRO" << endl;
    
    return 0;
}
