#include <iostream>
#include <string.h>

using namespace std;

int n, k;

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    
    cin >> n;
    char grid[n][n];
    memset(grid, 0, n*n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> k;

    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

    int x, y;
    int dir_num;
    k--;

    switch(k / n) {
        case 0:
            x = 0;
            y = k % n;
            dir_num = 1;
            break;
        case 1:
            x = k % n;
            y = n - 1;
            dir_num = 2;
            break;
        case 2:
            x = n - 1;
            y = n - (k % n) - 1;
            dir_num = 3;
            break;
        case 3:
            x = (n - 1) - (k % n);
            y = 0;
            dir_num = 0;
            break;
    }

    // 이제 거울에 튕기는 알고리즘 짜기
    int cnt = 0;

    while (InRange(x, y)) {
        char direction = grid[x][y];

        if (direction == '/') {
            
            if (dir_num == 0) {
                dir_num = 3;
            }
            else if (dir_num == 1) {
                dir_num = 2;
            }
            else if (dir_num == 2) {
                dir_num = 1;
            }
            else if (dir_num == 3) {
                dir_num = 0;
            }
        }
        else if (direction == '\\') {

            if (dir_num == 0) {
                dir_num = 1;
            }
            else if (dir_num == 1) {
                dir_num = 0;
            }
            else if (dir_num == 2) {
                dir_num = 3;
            }
            else if (dir_num == 3) {
                dir_num = 2;
            }
        } 

        x = x + dx[dir_num], y = y + dy[dir_num];
        cnt++;
    }

    cout << cnt;

    return 0;
}