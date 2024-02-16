#include <iostream>
#include <string.h>
using namespace std;

int n, m;

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {

    int x = 0, y = 0;
    cin >> n >> m;

    char grid[n][m];
    memset(grid, 0, n*m);

    int dir_num = 0;
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

    int cnt = 1;
    grid[x][y] = 65;

    for (int i = 1; i < n*m; i++) {

        int nx = x + dx[dir_num], ny = y + dy[dir_num];

        if (InRange(nx, ny) && grid[nx][ny] == 0) {
            x = nx, y = ny;
            grid[x][y] = (cnt % 26) + 65;
        }
        else {
            dir_num = (dir_num + 1) % 4;
            x = x + dx[dir_num], y = y + dy[dir_num];
            grid[x][y] = (cnt % 26) + 65;
        }
        cnt++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}