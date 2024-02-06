#include <iostream>
using namespace std;

int main() {

    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

    int n;
    cin >> n;

    int x = 0, y = 0;

    char direction;
    int distance;
    int dir;

    for (int i = 0; i < n; i++) {
        cin >> direction >> distance;

        if (direction == 'E') {
            dir = 0;
        }
        else if (direction == 'S') {
            dir = 1;
        }
        else if (direction == 'W') {
            dir = 2;
        }
        else if (direction == 'N') {
            dir = 3;
        }
        x += distance * dx[dir];
        y += distance * dy[dir];
    }

    cout << x << " " << y;
    // 여기에 코드를 작성해주세요.
    return 0;
}