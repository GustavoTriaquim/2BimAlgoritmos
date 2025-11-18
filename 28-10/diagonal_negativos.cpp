#include <iostream>
using namespace std;

int main() {
    int N;
    int negativos = 0;
    
    cout << "Qual a ordem da matriz? ";
    cin >> N;
    
    int MATRIZ[3][3];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << ", " << j << "]: ";
            cin >> MATRIZ[i][j];
        }
    }
    
    cout << "DIAGONAL PRINCIPAL: \n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                cout << MATRIZ[i][j] << endl;
            }
            
            if (MATRIZ[i][j] < 0) {
                negativos++;
            }
        }
    }
    
    cout << "QUANTIDADE DE NEGATIVOS: " << negativos << endl;
    return 0;
}
