#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout << "Deseja a tabuada para qual valor? ";
    cin >> N;
    
    for (int i = 0; i < 10; i++) {
        cout << N << " x " << i + 1 << " = " << (i + 1) * N << endl;
    }
    
    return 0;
}
