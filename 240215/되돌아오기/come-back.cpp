#include <iostream>
using namespace std;

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
int n, x, y;

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
int elapsed_time;
int ans = -1;

bool Move(int dir, int dist) {
    while (dist--) {
        x += dx[dir];
        y += dy[dir];

        elapsed_time++;

        if (x == 0 && y == 0) {
            ans = elapsed_time;
            return true;
        }
    }
    return false;
}

int main() {
    
    
    cin >> n;
    
    while (n--) {
        char c_dir; int dist;
        cin >> c_dir >> dist;

        int dir = getDir(c_dir);

        bool done = Move(dir, dist);

        if (done) break;
    }

    cout << ans;
    return 0;
}