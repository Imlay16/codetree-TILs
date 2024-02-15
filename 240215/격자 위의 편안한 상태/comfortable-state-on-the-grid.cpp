#include <iostream>
#include <string.h>
#define MAX_N 100

using namespace std;

int n, m;

int grid[MAX_N][MAX_N];

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

bool checkRoom(int x, int y) {
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];

        if (InRange(nx, ny) && grid[nx][ny] == 1) {
            cnt++;
        }
    }
    if (cnt == 3) return true;
    else return false;
}

int main() {

    cin >> n >> m;


    while (m--) {
        int x, y;
        cin >> x >> y;
        x--; y--;

        if (InRange(x, y)) {
            grid[x][y] = 1;
        }
        
        bool check = checkRoom(x, y);
        if (check) cout << 1;
        else cout << 0;
        cout << endl;
    }

    return 0;
}