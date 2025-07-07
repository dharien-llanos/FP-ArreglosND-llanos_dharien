#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"Ingrese el orden del cuadrado latino: ";
    cin>>N;

    int matriz[N][N];

    for (int i = 0; i < N; i++) {
        int valor = (1 + N - i) % N;
        if (valor == 0) valor = N;
        for (int j = 0; j < N; j++) {
            matriz[i][j] = valor;
            valor++;
            if (valor > N) valor = 1;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
