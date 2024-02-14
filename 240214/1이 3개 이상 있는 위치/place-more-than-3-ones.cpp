#include <iostream>
using namespace std;

#define MAX_N 100

int grid[MAX_N][MAX_N];

bool inRange(int x, int y) {
    return (0 <= x && x < MAX_N && 0 <= y && y < MAX_N);
}

int main() {

    int n;
    int cnt = 0;
    int answer = 0;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            
            cnt = 0;
            for (int dir_num = 0; dir_num < 4; dir_num++) {
                int nx = x + dx[dir_num], ny = y + dy[dir_num];

                if ((nx >= 0 && nx < n && ny >= 0 && ny < n) && grid[nx][ny] == 1) {
                    cnt++;
                } 
            }
            if (cnt >= 3) {
                answer++;
            }
        }

    }
    
    cout << answer;
    return 0;
}