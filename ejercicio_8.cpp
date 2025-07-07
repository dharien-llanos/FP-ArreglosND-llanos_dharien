#include <iostream>
using namespace std;

int main() {
    int matriz[5][5];

    cout<<"Ingrese los elementos de la matriz 5x5:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin>>matriz[i][j];
        }
    }

    int inicio = 0, fin = 4;
    cout<<"Recorrido en espiral:\n";

    while (inicio <= fin) {
        for (int j = inicio; j <= fin; j++) cout<<matriz[inicio][j]<<" ";
        for (int i = inicio + 1; i <= fin; i++) cout<<matriz[i][fin]<<" ";
        for (int j = fin - 1; j >= inicio; j--) cout<<matriz[fin][j]<<" ";
        for (int i = fin - 1; i > inicio; i--) cout<<matriz[i][inicio]<<" ";
        inicio++;
        fin--;
    }

    cout<<endl;
    return 0;
}
