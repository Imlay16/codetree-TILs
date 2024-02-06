#include <iostream>
#include <string>
using namespace std;


int main() {

    int x = 0, y = 0;

    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

    int dir = 3;
    string direction;

    cin >> direction;

    for (int i = 0; i < (int)direction.size(); i++) {
        char c_dir = direction[i];

        if (c_dir == 'L') {
            dir = (dir + 3) % 4;
        }
        else if (c_dir == 'R') {
            dir = (dir + 1) % 4;
        }
        else {
            x += dx[dir];
            y += dy[dir];
        }
    }
    cout << x << " " << y;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}