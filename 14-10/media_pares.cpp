#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    int VETOR[N];
    int soma = 0;
    int pares = 0;

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> VETOR[i];

        if (VETOR[i] % 2 == 0) {
            soma += VETOR[i];
            pares++;
        }
    }

    if (pares == 0) {
        cout << "NENHUM NUMERO PAR" << endl;
    } 
    else {
        double media = (double)soma / pares;
        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = " << media << endl;
    }

    return 0;
}
