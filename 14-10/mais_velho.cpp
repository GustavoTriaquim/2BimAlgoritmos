#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    
    cout << "Quantas pessoas voce vai digitar? ";
    cin >> N;
    
    string NOMES[N];
    int IDADES[N];
    int maisVelho = 0;
    
    for (int i = 0; i < N; i++) {
        cout << "Dados da " << i + 1 << "a pessoa:\n";
        
        cout << "Nome: ";
        cin.ignore();
        getline(cin, NOMES[i]);
        
        cout << "Idade: ";
        cin >> IDADES[i];
        
        if (IDADES[i] > IDADES[maisVelho]) {
            maisVelho = i;
        }
    }
    
    cout << "PESSOA MAIS VELHA: " << NOMES[maisVelho];
    
    return 0;
}
