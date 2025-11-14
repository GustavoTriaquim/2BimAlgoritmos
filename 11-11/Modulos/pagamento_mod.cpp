#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double Pagamento(double valorHora, double horasTrabalhadas) {
    return valorHora * horasTrabalhadas;
}

int main() {
    double valor, horas;
    string nome;
    
    cout << "Nome: ";
    getline(cin, nome);
    
    cout << "Valor por hora: ";
    cin >> valor;
    
    cout << "Horas trabalhadas: ";
    cin >> horas;
    
    cout << "O pagamento para " << nome << " deve ser " << fixed << setprecision(2) << Pagamento(valor, horas) << endl;
    
    return 0;
}
