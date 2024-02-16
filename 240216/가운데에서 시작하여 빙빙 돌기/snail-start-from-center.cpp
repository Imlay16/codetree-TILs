#include <iostream>
#include <string.h>
using namespace std;

int n;

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    
    cin >> n;
    int grid[n][n];
    memset(grid, 0, n*n*4);

    int x = n - 1, y = n - 1;
    int dir_num = 0;

    int dx[4] = {0, -1, 0 , 1}, dy[4] = {-1, 0, 1, 0};

    int cnt = n*n;
    grid[x][y] = cnt--;

    for (int i = 1; i < n*n; i++) {

        int nx = x + dx[dir_num], ny = y + dy[dir_num];

        if (InRange(nx, ny) && grid[nx][ny] == 0) {
            grid[nx][ny] = cnt;
            x = nx, y = ny;
        }
        else {
            dir_num = (dir_num + 1) % 4;
            x = x + dx[dir_num], y = y + dy[dir_num];
            grid[x][y] = cnt;
        }
        cnt--;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}