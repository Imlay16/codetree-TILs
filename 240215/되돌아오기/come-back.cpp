#include <iostream>
using namespace std;

#define MAX_N 100

int dist[MAX_N];
char dir[MAX_N];

int getDir(char a_dir) {
    switch(a_dir) {
        case 'E':
            return 0;
        case 'S':
            return 1;
        case 'W':
            return 2;
        case 'N':
            return 3;
    }
}

int main() {
    
    int n;
    cin >> n;

    int x = 0, y = 0;
    int flag = 0;

    int cnt = 1;
    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    for (int i = 0; i < n; i++) {

        char a_dir = dir[i];

        for (int j = 0; j < dist[i]; j++) {
            int nx = x + dx[getDir(a_dir)], ny = y + dy[getDir(a_dir)];

            cout << nx << " " << ny << endl;
            
            if (i != 0 && nx == 0 && ny == 0) {
                flag = 1;
                break;
            }

            x = nx, y = ny;
            cnt++;
        }        
        if (flag == 1) break;
    }

    if (flag == 0) cout << -1;
    else cout << cnt;

    return 0;
}