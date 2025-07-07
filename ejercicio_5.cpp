#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    int max, min, filaMax, colMax, filaMin, colMin;

    cout<<"Ingrese los elementos de la matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin>>matriz[i][j];
            if (i == 0 && j == 0) {
                max = min = matriz[i][j];
                filaMax = filaMin = 0;
                colMax = colMin = 0;
            } else {
                if (matriz[i][j] > max) {
                    max = matriz[i][j];
                    filaMax = i;
                    colMax = j;
                }
                if (matriz[i][j] < min) {
                    min = matriz[i][j];
                    filaMin = i;
                    colMin = j;
                }
            }
        }
    }

    cout<<"Valor maximo: "<<max<<" en Fila "<<filaMax+1<<", Columna "<<colMax+1<<endl;
    cout<<"Valor minimo: "<<min<<" en Fila "<<filaMin+1<<", Columna "<<colMin+1<<endl;

    return 0;
}
