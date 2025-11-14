#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double Area(double base, double altura) {
    return base * altura;
}

double Perimetro(double base, double altura) {
    return 2 * (base + altura);
}

double Diagonal(double base, double altura) {
    return sqrt(pow(base, 2) + pow(altura, 2));
}

int main() {
    double b, h;
    
    cout << "Digite a base: ";
    cin >> b;
    
    cout << "Digite a altura: ";
    cin >> h;
    
    cout << "AREA = " << fixed << setprecision(4) << Area(b, h) << endl;
    cout << "PERIMETRO = " << fixed << setprecision(4) << Perimetro(b, h) << endl;
    cout << "DIAGONAL = " << fixed << setprecision(4) << Diagonal(b, h) << endl;
    
    return 0;
}
