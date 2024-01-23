#include <iostream>
using namespace std;

int rectangle;

#define OFF_SET 1000
#define MAX_N   2000

int x1[3];
int y1[3];
int x2[3];
int y2[3];

int cord[MAX_N + 1][MAX_N + 1];

int main() {
    
    for (int i = 0; i < 3; i++) {
        
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i] += OFF_SET;
        x2[i] += OFF_SET;
        y1[i] += OFF_SET;
        y2[i] += OFF_SET;
    }

    for (int i = 0; i < 2; i++) {
        for (int x = x1[i]; x < x2[i]; x++) {
            for (int y = y1[i]; y < y2[i]; y++) {

                cord[x][y] = 1;
            }
        }
    }

    for (int x = x1[2]; x < x2[2]; x++) {
        for (int y = y1[2]; y < y2[2]; y++) {
            cord[x][y] = 2;
        }
    }

    for (int x = 0; x <= MAX_N; x++) {
        for (int y = 0; y <= MAX_N; y++) {
            if (cord[x][y] == 1) rectangle++;
        }
    }

    cout << rectangle;
    
    return 0;
}