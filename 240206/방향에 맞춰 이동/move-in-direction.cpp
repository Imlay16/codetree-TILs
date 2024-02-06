#include <iostream>
using namespace std;

int main() {

    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

    int n;
    cin >> n;

    int x = 0, y = 0;

    char direction;
    int distance;

    for (int i = 0; i < n; i++) {
        cin >> direction >> distance;

        if (direction == 'E') {
            x += distance * dx[0];
            y += distance * dy[0];
        }
        else if (direction == 'S') {
            x += distance * dx[1];
            y += distance * dy[1];
        }
        else if (direction == 'W') {
            x += distance * dx[2];
            y += distance * dy[2];
        }
        else if (direction == 'N') {
            x += distance * dx[3];
            y += distance * dy[3];
        }
    }

    cout << x << " " << y;
    // 여기에 코드를 작성해주세요.
    return 0;
}