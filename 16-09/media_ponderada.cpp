#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    
    cout << "Quantos casos voce vai digitar? ";
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        double n1, n2, n3, media = 0;
        
        cout << "Digite tres numeros:\n";
        cin >> n1 >> n2 >> n3;
        
        media = ((n1 * 2.0) + (n2 * 3.0) + (n3 * 5.0)) / 10.0;
        
        cout << "MEDIA = " << fixed << setprecision(1) << media << endl;
    }
    
    return 0;
}
