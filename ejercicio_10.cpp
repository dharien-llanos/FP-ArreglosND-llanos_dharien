#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int minas[10][10];
    int numeros[10][10];
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            minas[i][j] = rand() % 2;
            numeros[i][j] = 0;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (minas[i][j] == 1) continue;
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    int ni = i + dx;
                    int nj = j + dy;
                    if (dx == 0 && dy == 0) continue;
                    if (ni >= 0 && ni < 10 && nj >= 0 && nj < 10) {
                        if (minas[ni][nj] == 1) numeros[i][j]++;
                    }
                }
            }
        }
    }

    cout<<"Minas            Numeros\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout<<minas[i][j]<<" ";
        }
        cout<<"     ";
        for (int j = 0; j < 10; j++) {
            cout<<numeros[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
