#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    
    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;
    
    double VETOR[N];
    
    double soma = 0;
    
    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> VETOR[i];
        
        soma += VETOR[i];
    }
    
    double media = soma / N;
    
    cout << "\nVALORES = ";
    
    for (int i = 0; i < N; i++) {
        cout << fixed << setprecision(1) << VETOR[i] << " ";
    }
    
    cout << fixed << setprecision(1);
    cout << "\nSOMA = " << soma;
    cout << "\nMEDIA = " << media;
    
    return 0;
}
