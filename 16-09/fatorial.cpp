#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    int resultado = 1;
    
    cout << "Digite o valor de N? ";
    cin >> N;

    if (N == 0) {
        resultado = 1;
    } else {
        for (int i = 1; i <= N; i++) {
            resultado = i * resultado;
        }
    }
    
    cout << "FATORIAL = " << resultado;
    
    return 0;
}
