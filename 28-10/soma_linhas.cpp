#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N, M;
    
    cout << "Qual a quantiade de linhas da matriz? ";
    cin >> N;
    
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> M;
    
    double MATRIZ[N][M];
    double VETOR[N];
    
    for (int i = 0; i < N; i++) {
        cout << "Digite os elementos da " << i + 1 << "a. linha:" << endl;
        for (int j = 0; j < M; j++) {
            cin >> MATRIZ[i][j];
        }
    }
    
    for (int i = 0; i < N; i++) {
        double soma = 0;
        for (int j = 0; j < M; j++) {
            soma += MATRIZ[i][j];
        }
        VETOR[i] = soma;
    }
    
    cout << "\nVETOR GERADO:\n";
    for (int i = 0; i < N; i++) {
        cout << fixed << setprecision(1) << VETOR[i] << endl;
    }
    
    return 0;
}
