#include <iostream>
#include <iomanip>
using namespace std;

double Quadrado(double medA) {
    return medA * medA;
}

double Triangulo(double medA, double medB) {
    return (medA * medB) / 2;
}

double Trapezio(double medA, double medB, double medC) {
    return ((medA + medB) * medC) / 2;
}

int main() {
    double a, b, c;
    
    cout << "Digite a medida A: ";
    cin >> a;
    
    cout << "Digite a medida B: ";
    cin >> b;
    
    cout << "Digite a medida C: ";
    cin >> c;
    
    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << Quadrado(a) << endl;
    cout << "AREA DO TRIANGULO = " << Triangulo(a, b) << endl;
    cout << "AREA DO TRAPEZIO = " << Trapezio(a, b, c) << endl;
    
    return 0;
}
