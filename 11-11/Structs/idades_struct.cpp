#include <iostream>
#include <string>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

int main() {
    int N = 2;
    int soma = 0;
    Pessoa pessoas[N];
    
    for (int i = 0; i < N; i++) {
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        cin.ignore();
        getline(cin, pessoas[i].nome);
        
        cout << "Digite a idade da pessoa " << i + 1 << ": ";
        cin >> pessoas[i].idade;
        
        soma += pessoas[i].idade;
    }
    
    double media = (double)soma / N;
    
    cout << "A média de idade é: " << media << endl;
    
    return 0;
}
