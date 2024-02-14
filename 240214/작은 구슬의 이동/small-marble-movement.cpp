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
    else if (a_dir == 'L') {
        return 2;
    }
    else if (a_dir == 'U') {
        return 3;
    }
}

bool isRange(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
   
    int t;
    char dir;
    int x, y;

    cin >> n >> t;
    cin >> x >> y >> dir;
    x--;
    y--;

    int dx[4] = {0, 1, -1, 0}, dy[4] = {1, 0, 0, -1};
    
    int get_dir = getDir(dir);

    for (int i = 0; i < t; i++) {

        if (!isRange(x, y)) {
            i++;
            get_dir = 3 - get_dir;
        }

        x = x + dx[get_dir];
        y = y + dy[get_dir];
    }

    cout << x + 1 << " " << y + 1;
    
    return 0;
}