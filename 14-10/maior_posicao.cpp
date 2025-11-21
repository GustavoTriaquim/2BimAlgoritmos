#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    
    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;
    
    double VETOR[N];
    
    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> VETOR[i];
    }
    
    double maiorValor = VETOR[0];
    int posicao = 0;
    
    for (int i = 0; i < N; i++) {
        if (VETOR[i] > maiorValor) {
            maiorValor = VETOR[i];
            posicao = i;
        }
    }
    
    cout << "\nMAIOR VALOR = " << fixed << setprecision(1) << maiorValor << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posicao << endl;
    
    return 0;
}
