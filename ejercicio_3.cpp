#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    int sumaPrincipal = 0;
    int sumaSecundaria = 0;

    cout << "Ingrese los elementos de la matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        sumaPrincipal += matriz[i][i];
        sumaSecundaria += matriz[i][3 - i];
    }

    cout << "Suma diagonal principal: " << sumaPrincipal << endl;
    cout << "Suma diagonal secundaria: " << sumaSecundaria << endl;

    return 0;
}
