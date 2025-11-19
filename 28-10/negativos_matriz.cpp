#include <iostream>
using namespace std;

int main() {
    int N, M;
    
    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> N;
    
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> M;

    int MATRIZ[N][M];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> MATRIZ[i][j];
        }
    }
    
    cout << "\nVALORES NEGATIVOS:\n";
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (MATRIZ[i][j] < 0) {
                cout << MATRIZ[i][j] << endl;
            }
        }
    }
    return 0;
}
