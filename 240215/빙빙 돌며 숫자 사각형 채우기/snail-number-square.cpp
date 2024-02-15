#include <iostream>
#include <string.h>
using namespace std;

bool inRange(int x, int y, int n, int m) {
    return (0 <= x && x < n && 0 <= y && y < m);
}



int main() {
    
    int n, m;
    cin >> n >> m;
    
    int answer[n][m];
    memset(answer, 0, n*m*4);

    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
    int dir = 0;
    int x = 0, y = 0;

    answer[x][y] = 1;

    int cnt = 1;
    cnt++;
    
    for (int i = 1; i < n * m; i++) {

        int nx = x + dx[dir], ny = y + dy[dir];

        if (!inRange(nx, ny, n, m) || answer[nx][ny] != 0) {
            dir = (dir + 1) % 4;
        }

        x = x + dx[dir], y = y + dy[dir];
        answer[x][y] = cnt++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}