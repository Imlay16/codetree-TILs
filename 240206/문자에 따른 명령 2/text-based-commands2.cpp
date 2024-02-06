#include <iostream>
using namespace std;


int main() {

    int x = 0, y = 0;

    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

    int dir = 3;
    char direction;
    char move;

   
    cin >> direction >> move;

    if (direction == 'L') {
        dir = (dir + 3) % 4;
    }
    else if (direction == 'R') {
        dir = (dir + 1) % 4;
    }

    if (move == 'F') {
        x += dx[dir];
        y += dy[dir];
    }


    cout << x << " " << y;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}