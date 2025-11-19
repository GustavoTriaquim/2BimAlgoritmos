#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    
    cout << "Qual a ordem da matriz? ";
    cin >> N;
    
    double MATRIZ[N][N];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> MATRIZ[i][j];
        }
    }
    
    double soma = 0.0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (MATRIZ[i][j] > 0) {
                soma += MATRIZ[i][j];
            }
        }
    }
    
    cout << fixed << setprecision(1);
    cout << "SOMA DOS POSITIVOS: " << soma << endl;
    
    int linha;
    cout << "Escolha uma linha: ";
    cin >> linha;
    
    cout << "LINHA ESCOLHIDA: ";
    for (int j = 0; j < N; j++) {
        cout << MATRIZ[linha][j] << " ";
    }
    cout << endl;
    
    int coluna;
    cout << "Escolha uma coluna: ";
    cin >> coluna;
    
    cout << "COLUNA ESCOLHIDA: ";
    for (int i = 0; i < N; i++) {
        cout << MATRIZ[i][coluna] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (MATRIZ[i][j] < 0) {
                MATRIZ[i][j] = MATRIZ[i][j] * MATRIZ[i][j];
            }
        }
    }
    
    cout << "MATRIZ ALTERADA: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << MATRIZ[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
