#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int tablero[10][10];
    int siguiente[10][10];
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tablero[i][j] = rand() % 2;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int vecinos = 0;
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    int ni = i + dx;
                    int nj = j + dy;
                    if (dx == 0 && dy == 0) continue;
                    if (ni >= 0 && ni < 10 && nj >= 0 && nj < 10) {
                        if (tablero[ni][nj] == 1) vecinos++;
                    }
                }
            }

            if (tablero[i][j] == 1) {
                if (vecinos < 2 || vecinos > 3) {
                    siguiente[i][j] = 0;
                } else {
                    siguiente[i][j] = 1;
                }
            } else {
                if (vecinos == 3) {
                    siguiente[i][j] = 1;
                } else {
                    siguiente[i][j] = 0;
                }
            }
        }
    }

    cout<<"Tablero inicial      Segunda generacion\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout<<tablero[i][j]<<" ";
        }
        cout<<"     ";
        for (int j = 0; j < 10; j++) {
            cout<<siguiente[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
