#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int bosque[10][10];
    int nuevoBosque[10][10];
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            bosque[i][j] = rand() % 3;
        }
    }

    cout<<"Estado inicial:\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout<<bosque[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (bosque[i][j] == 0) {
                bool vecinoQuema = false;
                for (int dx = -1; dx <= 1; dx++) {
                    for (int dy = -1; dy <= 1; dy++) {
                        int ni = i + dx;
                        int nj = j + dy;
                        if (ni >= 0 && ni < 10 && nj >= 0 && nj < 10) {
                            if ((dx != 0 || dy != 0) && bosque[ni][nj] == 1) {
                                vecinoQuema = true;
                            }
                        }
                    }
                }
                nuevoBosque[i][j] = vecinoQuema ? 1 : 0;
            } else if (bosque[i][j] == 1) {
                nuevoBosque[i][j] = 2;
            } else {
                nuevoBosque[i][j] = 2;
            }
        }
    }

    cout<<"Estado despues de propagacion:\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout<<nuevoBosque[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
