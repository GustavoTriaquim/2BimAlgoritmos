#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int N;
    
    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;
    
    double ALTURAS[100];
    string GENERO[100];
    
    double menorAltura = 0;
    double maiorAltura = 0;
    double somaMulheres = 0.0;
    int homens = 0, mulheres = 0;
    
    for (int i = 0; i < N; i++) {
        cout << "Altura da " << i + 1 << "a pessoa: ";
        cin >> ALTURAS[i];
        
        cout << "Genero da " << i + 1 << "a pessoa: ";
        cin >> GENERO[i];
        
        if (i == 0) {
            menorAltura = ALTURAS[i];
            maiorAltura = ALTURAS[i];
        }
        
        if (ALTURAS[i] < menorAltura) {
            menorAltura = ALTURAS[i];
        }
        
        if (ALTURAS[i] > maiorAltura) {
            maiorAltura = ALTURAS[i];
        }
        
        if (GENERO[i] == "F") {
            somaMulheres += ALTURAS[i];
            mulheres++;
        } 
        else if (GENERO[i] == "M") {
            homens++;
        }
    }
    
    cout << fixed << setprecision(2);

    cout << "Menor altura = " << menorAltura << endl;
    cout << "Maior altura = " << maiorAltura << endl;
    
    if (mulheres > 0) {
        double mediaMulheres = somaMulheres / mulheres;
        cout << "Media das alturas das mulheres = " << mediaMulheres << endl;
    } else {
        cout << "Media das alturas das mulheres = N/A (nenhuma mulher)" << endl;
    }

    cout << "Numero de homens = " << homens << endl;
    
    return 0;
}
