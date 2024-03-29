#include <iostream>
using namespace std;

int n;

int getDir(char a_dir) {
    if (a_dir == 'R') {
        return 0;
    }
    else if (a_dir == 'D') {
        return 1;
    }
    else if (a_dir == 'U') {
        return 2;
    }
    else if (a_dir == 'L') {
        return 3;
    }
}

bool isRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
   
    int t;
    char dir;
    int r, c;

    cin >> n >> t;
    cin >> r >> c >> dir;
    r--; c--;

    int dx[4] = {0, 1, -1, 0}, dy[4] = {1, 0, 0, -1};
    
    int get_dir = getDir(dir);

    while (t--) {
        int nx = r + dx[get_dir], ny = c + dy[get_dir];
        if (isRange(nx, ny)) {
            r = nx, c = ny;
        }
        else {
            get_dir = 3 - get_dir;
        }
    }

    cout << r + 1 << " " << c + 1;
    
    return 0;
}