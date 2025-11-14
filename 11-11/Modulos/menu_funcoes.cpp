#include <iostream>
using namespace std;

int menu() {
    int opcao;
    cout << "\nSelecione uma opção: " << endl;
    cout << "(1) - Média dos valores" << endl;
    cout << "(2) - Maior e Menor valor" << endl;
    cout << "(3) - Contar Pares" << endl;
    cout << "(0) - Sair" << endl;
    cout << "Opção: ";
   
    cin >> opcao;
    return opcao;
}

void mediaVetor(int v[], int N) {
    float soma = 0;
    for (int i = 0; i < N; i++) {
        soma += v[i];
    }
    cout << "\nMédia = " << soma / N << endl;
}

void maiorMenor(int v[], int N) {
    int menor = v[0];
    int maior = v[0];

    for (int i = 1; i < N; i++) {
        if (v[i] < menor) menor = v[i];
        if (v[i] > maior) maior = v[i];
    }

    cout << "\nMenor valor = " << menor << endl;
    cout << "Maior valor = " << maior << endl;
}

void contarPares(int v[], int N) {
    int pares = 0;
    for (int i = 0; i < N; i++) {
        if (v[i] % 2 == 0) {
            pares++;
        }
    }
    cout << "\nQuantidade de pares = " << pares << endl;
}

int main() {
    int N;

    cout << "Número de casas do vetor: ";
    cin >> N;

    int vetor[N];

    for (int i = 0; i < N; i++) {
        cout << "Valor da casa " << i << ": ";
        cin >> vetor[i];
    }

    int opcao;
    do {

        cout << "\nVetor atual: [ ";
        for (int i = 0; i < N; i++) {
            cout << vetor[i] << ", ";
        }
        cout << "]\n";

        opcao = menu();

        switch (opcao) {
            case 0:
                cout << "Saindo..." << endl;
                break;

            case 1:
                mediaVetor(vetor, N);
                break;

            case 2:
                maiorMenor(vetor, N);
                break;

            case 3:
                contarPares(vetor, N);
                break;

            default:
                cout << "Opção inválida! Tente novamente.\n";
        }

    } while (opcao != 0);

    return 0;
}
