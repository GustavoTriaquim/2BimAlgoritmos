#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Quantos valores vai ter cada vetor? ";
    cin >> N;
    
    int VETORA[N];
    int VETORB[N];
    int VETOR[N];
    
    cout << "Digite os valores do vetor A:\n";
    
    for (int i = 0; i < N; i++) {
        cin >> VETORA[i];
    }
    
    cout << "Digite os valores do vetor B:\n";
    
    for (int i = 0; i < N; i++) {
        cin >> VETORB[i];
    }
    
    cout << "VETOR RESULTANTE:\n";
    
    for (int i = 0; i < N; i++) {
        VETOR[i] = VETORA[i] + VETORB[i];
        cout << VETOR[i] << endl;
    }
    
    return 0;
}
