#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int valor;

    cout << "Ingrese los elementos de la matriz 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "Valor a buscar: ";
    cin >> valor;

    cout << "El valor " << valor << " se encuentra en:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == valor) {
                cout << "Fila " << i << ", Columna " << j << endl;
            }
        }
    }

    return 0;
}
