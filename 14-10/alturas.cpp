#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N;
    
    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;
    
    string NOMES[N];
    int IDADES[N];
    double ALTURAS[N];
    
    double somaAlt = 0;
    int menor16 = 0;
    
    for (int i = 0; i < N; i++) {
        cout << "Dados da " << i+1 << "a. pessoa:\n";
        
        cout << "Nome: ";
        cin.ignore();
        getline(cin, NOMES[i]);
        
        cout << "Idade: ";
        cin >> IDADES[i];
        
        cout << "Altura: ";
        cin >> ALTURAS[i];
        
        somaAlt += ALTURAS[i];
    }
    
    double media = somaAlt / N;
    
    for (int i = 0; i < N; i++) {
        if (IDADES[i] < 16) {
            menor16++;
        }
    }
    
    double porcentagem16 = double(menor16) * 100.0 / N;
    
    cout << "\nAltura media: " << fixed << setprecision(2) << media << endl;
    cout << "\nPessoas com menos de 16 anos: " << fixed << setprecision(1) << porcentagem16 << "%" << endl;
    
    for (int i = 0; i < N; i++) {
        if (IDADES[i] < 16) {
            cout << NOMES[i] << endl;
        }
    }
    
    return 0;
}
