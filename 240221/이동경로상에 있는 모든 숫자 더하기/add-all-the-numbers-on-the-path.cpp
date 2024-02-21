#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int n, t;

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}


int main() {

    cin >> n >> t;

    int grid[n][n];
    memset(grid, 0, n*n*4);

    int dir_num = 3;

    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

    int x = n / 2, y = n / 2;

    string str;
    cin >> str;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int ans = grid[x][y];

    for (int i = 0; i < str.size(); i++) {

        char dir = str[i];

        if (dir == 'L') {
            dir_num = (dir_num + 3) % 4;
        }
        else if (dir == 'R') {
            dir_num = (dir_num + 1) % 4;
        }
        else if (dir == 'F') {

            int nx = x + dx[dir_num], ny = y + dy[dir_num];
            
            if (!InRange(nx, ny)) {
                continue;
            }

            x = nx, y = ny;
            ans += grid[x][y];
        }
    }

    cout << ans;
    return 0;
}