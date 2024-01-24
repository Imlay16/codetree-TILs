#include <iostream>
#include <string.h>
using namespace std;

#define MAX_N 1000
#define OFF_SET 100
#define N 10

int cord[MAX_N + 1][MAX_N + 1];

int x1[N];
int x2[N];
int y1[N];
int y2[N];

int main() {
    
    int n; 
    cin >> n;

    for (int i = 0; i < n; i++) {

        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i] += OFF_SET;
        x2[i] += OFF_SET;
        y1[i] += OFF_SET;
        y2[i] += OFF_SET;
    }

    for (int i = 0; i < n; i++) {
        for (int x = x1[i]; x < x2[i]; x++) {
            for (int y = y1[i]; y < y2[i]; y++) {
                cord[x][y] = i % 2;
            }
        }
    }

    int area = 0;
    for (int x = 0; x <= MAX_N; x++) {
        for (int y = 0; y <= MAX_N; y++) {
            if (cord[x][y]) area++;
        }
    }

    cout << area;
    return 0;
}