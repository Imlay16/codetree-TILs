#include <iostream>
using namespace std;
#define MAX_N 100
int n, m;

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int grid[MAX_N][MAX_N];

int main() {

    cin >> n >> m;

    int x = 0, y = 0;
    int dir_num = 0;

    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

    grid[x][y] = 1;
    int cnt = 2;

    for (int i = 1; i < n * m; i++) {
        
        int nx = x + dx[dir_num], ny = y + dy[dir_num];

        if (InRange(nx, ny) && grid[nx][ny] == 0) {
            grid[nx][ny] = cnt++;
            x = nx, y = ny;
        }
        else {
            dir_num = (dir_num + 1) % 4;
            i--;
        }
    }    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}