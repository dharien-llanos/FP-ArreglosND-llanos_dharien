#include <iostream>
using namespace std;

int main() {
    int matriz[4][4], rotada[4][4];

    cout<<"Ingrese los elementos de la matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin>>matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            rotada[j][3 - i] = matriz[i][j];
        }
    }

    cout<<"Matriz rotada 90 grados en sentido horario:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout<<rotada[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
