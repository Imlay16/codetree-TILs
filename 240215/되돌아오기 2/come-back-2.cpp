#include <iostream>
#include <string.h>
using namespace std;

int x, y;
int ans = -1;
int elapsed_time;

int dir_num = 0;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

int main() {
    
    string order;
    cin >> order;

    for (int i = 0; i < order.size(); i++) {

        elapsed_time++;

        if (order[i] == 'L') {
            dir_num = (dir_num + 3) % 4;
        }
        else if (order[i] == 'R') {
            dir_num = (dir_num + 1) % 4;
        }
        else if (order[i] == 'F') {
            x += dx[dir_num], y += dy[dir_num];
        }

        if (i != 0 && x == 0 && y == 0) {
            ans = elapsed_time;
            break;
        }
    }
    cout << ans;

    return 0;
}