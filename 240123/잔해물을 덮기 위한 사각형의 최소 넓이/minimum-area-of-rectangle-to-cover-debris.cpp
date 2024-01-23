#include <iostream>
using namespace std;

#define N 2
#define OFF_SET 1000
#define MAX_N  2000

int cord[MAX_N + 1][MAX_N + 1];

int x1[N];
int x2[N];
int y1[N];
int y2[N];

int main() {
    
    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i] += OFF_SET;
        x2[i] += OFF_SET;
        y1[i] += OFF_SET;
        y2[i] += OFF_SET;
    }

    for (int i = 0; i < N; i++) {
        for (int x = x1[i]; x < x2[i]; x++) {
            for (int y = y1[i]; y < y2[i]; y++) {
                cord[x][y] = i + 1;
            }
        }
    }

    int min_x = 2000, min_y = 2000;
    int max_x = 0, max_y = 0;

    for (int x = 0; x <= MAX_N; x++) {
        for (int y = 0; y <= MAX_N; y++) {
            if (cord[x][y] == 1) {
                if (min_x > x) min_x = x;
                if (min_y > y) min_y = y;
                if (max_x < x) max_x = x;
                if (max_y < y) max_y = y;
            }
        }
    }

    int area = 0;
    for (int x = min_x; x <= max_x; x++) {
        for (int y = min_y; y <= max_y; y++) {
            area++;
        }
    }   

    cout << area;

    return 0;
}