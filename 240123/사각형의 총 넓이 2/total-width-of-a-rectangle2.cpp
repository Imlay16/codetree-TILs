#include <iostream>
using namespace std;

#define MAX_N   200
#define OFF_SET 100

int cord[MAX_N][MAX_N];

int main() {
    
    int n;
    cin >> n;

    int rectangle = 0;

    int x1, y1, x2, y2;

    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFF_SET;
        x2 += OFF_SET;
        y1 += OFF_SET;
        y2 += OFF_SET;

        for (int j = x1; j < x2; j++) {
            for (int k = y1; k < y2; k++) {
                cord[j][k] = 1;
            }
        }
    }

    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j < MAX_N; j++) {
            if (cord[i][j] == 1) rectangle++;
        }
    }
    
    cout << rectangle;
    return 0;
}