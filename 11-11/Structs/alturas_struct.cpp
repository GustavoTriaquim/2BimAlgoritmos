#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Pessoa {
  string nome;
  int idade;
  double altura;
};

int main() {
    int N;
    
    cout << "Digite o número de pessoas: ";
    cin >> N;
    Pessoa pessoas[N];
    
    double soma = 0;
    int menor16 = 0;
    
    for (int i = 0; i < N; i++) {
        cout << "Dados da pessoa " << i + 1 << ": \n";
        
        cout << "Nome: ";
        cin >> pessoas[i].nome;
        
        cout << "Idade: ";
        cin >> pessoas[i].idade;
        
        if (pessoas[i].idade < 16) {
            menor16++;
        }
        
        cout << "Altura: ";
        cin >> pessoas[i].altura;
        
        soma = soma + pessoas[i].altura;
        
        cout << endl;
    }
    
    double media = soma / N;
    double percentual = (double)menor16 * 100.0 / N;
    
    cout << fixed << setprecision(2);
    cout << "Altura média: " << media << endl;
    cout << "Pessoas menores de 16: " << percentual << "% " << endl;
    if (menor16 > 0) {
        cout << "Menores:\n";
        for (int i = 0; i < N; i++) {
            if (pessoas[i].idade < 16) {
                cout << pessoas[i].nome << endl;
            }
        }
    }
    
    return 0;
}
