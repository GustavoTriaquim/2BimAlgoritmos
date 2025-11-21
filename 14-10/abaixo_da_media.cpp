#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    
    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;
    
    double VETOR[N];
    double soma = 0.0;
    
    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> VETOR[i];
        
        soma += VETOR[i];
    }
    
    double media = soma / N;
    
    cout << "\nMEDIA DO VETOR = " << fixed << setprecision(3) << media << endl;
    
    cout << "ELEMENTOS ABAIXO DA MEDIA:\n";
    
    for (int i = 0; i < N; i++) {
        if (VETOR[i] < media) {
            cout << fixed << setprecision(1) << VETOR[i] << endl;
        }
    }
    
    return 0;
}
