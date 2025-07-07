#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    int fila1, fila2;

    cout<<"Ingrese los elementos de la matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin>>matriz[i][j];
        }
    }

    cout<<"Filas a intercambiar:\n";
    cin>>fila1>>fila2;

    for (int j = 0; j < 4; j++) {
        int temp = matriz[fila1][j];
        matriz[fila1][j] = matriz[fila2][j];
        matriz[fila2][j] = temp;
    }

    cout<<"Matriz resultante:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
