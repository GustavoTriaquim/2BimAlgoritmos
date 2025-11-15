#include <iostream>
#include <string>
using namespace std;

struct Funcionario {
    string nome;
    double valHora;
    double horasTrab;
};

int main() {
    int N;
    
    cout << "Digite o numero de funcionarios: ";
    cin >> N;
    Funcionario funcionarios[N];
    
    for (int i = 0; i < N; i++) {
        cout << "Nome do funcionario " << i + 1 << ": ";
        cin.ignore();
        getline(cin, funcionarios[i].nome);
        
        cout << "Valor da hora de " << funcionarios[i].nome << ": ";
        cin >> funcionarios[i].valHora;
        
        cout << "Horas trabalhadas por " << funcionarios[i].nome << ": ";
        cin >> funcionarios[i].horasTrab;
        
        double pagamento = funcionarios[i].valHora * funcionarios[i].horasTrab;
        
        cout << "\nO pagamento individual de " << funcionarios[i].nome << " é de R$" << pagamento << " \n" << endl;
    }
    
    return 0;
}
