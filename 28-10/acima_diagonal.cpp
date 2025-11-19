#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Qual a ordem da matriz? ";
    cin >> N;
    
    int MATRIZ[N][N];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> MATRIZ[i][j];
        }
    }
    
    int soma = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j > i) {
                soma += MATRIZ[i][j];
            }
        }
    }
    
    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << soma << endl;
    
    return 0;
}
