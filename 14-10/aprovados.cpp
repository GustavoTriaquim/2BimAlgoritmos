#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N;
    
    cout << "Quantos alunos serao digitados? ";
    cin >> N;
    
    string NOMES[N];
    double NOTA1[N];
    double NOTA2[N];
    double MEDIAS[N];
    
    for (int i = 0; i < N; i++) {
        cout << "Digite nome, primeira e segunda nota do " << i + 1 << "o aluno:\n";
        cin.ignore();
        getline(cin, NOMES[i]);
        cin >> NOTA1[i];
        cin >> NOTA2[i];
    }
    
    cout << "Alunos aprovados:\n";
    
    for (int i = 0; i < N; i++) {
        MEDIAS[i] = (NOTA1[i] + NOTA2[i]) / 2;
        
        if (MEDIAS[i] >= 6.0) {
            cout << NOMES[i] << endl;
        }
    }
    
    return 0;
}
