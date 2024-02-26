#include <iostream>

using namespace std;

#define MAX_N 20

int n;
int grid[MAX_N][MAX_N];

int main() {
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int max = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 2; j++) {
            
            int cnt = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];

            if (max < cnt) {
                max = cnt;
            }
        }
    }

    cout << max;

    return 0;
}