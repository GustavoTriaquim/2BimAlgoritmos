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
    
    cout << "\nMAIOR ELEMENTO DE CADA LINHA:\n";
    
    for (int i = 0; i < N; i++) {
        int maior = MATRIZ[i][0];
        for (int j = 0; j < N; j++) {
            if (MATRIZ[i][j] > maior) {
                maior = MATRIZ[i][j];
            }
        }
        cout << maior << endl;
    }
    
    return 0;
}
