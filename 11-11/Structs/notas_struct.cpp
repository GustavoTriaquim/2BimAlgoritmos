#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    double nota1;
    double nota2;
    double media;
};

int main() {
    int N;
    
    cout << "Digite o número de alunos: ";
    cin >> N;
    Aluno alunos[N];
    
    for (int i = 0; i < N; i++) {
        cout << "\nNome do aluno: ";
        cin >> alunos[i].nome;
        
        cout << "Nota 1 do(a) aluno(a) " << alunos[i].nome << ": ";
        cin >> alunos[i].nota1;
        
        cout << "Nota 2 do(a) aluno(a) " << alunos[i].nome << ": ";
        cin >> alunos[i].nota2;
    
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2.0;
        
        cout << fixed << setprecision(1);
        cout << "Média de " << alunos[i].nome << ": "<< alunos[i].media << "\n";
    }
    
    cout << "\nReprovados: \n";
    for (int i = 0; i < N; i++) {
        if (alunos[i].media < 6.0) {
            cout << fixed << setprecision(1);
            cout << alunos[i].nome << " - " << alunos[i].media << endl;
        }
    }
    
    return 0;
}
