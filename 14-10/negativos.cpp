#include <iostream>
using namespace std;

int main() {
    int N;
    int negativos = 0;
    
    cout << "Quanto numeros voce vai digitar? ";
    cin >> N;
    
    int VETOR[N];
    
    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> VETOR[i];
    }
    
    cout << "NUMEROS NEGATIVOS:\n";
    
    for (int i = 0; i < N; i++) {
        if (VETOR[i] < 0) {
            cout << VETOR[i] << endl;
        }
    }
    
    return 0;
}
