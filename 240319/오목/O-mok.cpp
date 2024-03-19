#include <iostream>
using namespace std;

#define MAX_N 19


int nums[5];
int grid[MAX_N][MAX_N];

int main() {

    for (int x = 0; x < 19; x++) {
        for (int y = 0; y < 19; y++) {

            cin >> grid[x][y];
        }
    }
    int row = 0, col = 0;

    int ans = 0;
    int flag = 0;

    for (int x = 0; x < 19; x++) {
        for (int y = 0; y < 19; y++) {
            
            int color = grid[x][y];
            
            if (color) {

                int direction[8] = {0, };

                for (int i = 0; i < 4; i++) {
                    if (x - i - 1 >= 0 && grid[x - i - 1][y] == color) {
                        flag = 1;
                    }
                    else {
                        flag = 0;
                        break;
                    }
                }

                if (flag) {
                    ans = color;
                    row = x - 2;
                    col = y;
                    break;
                }

                //down
                for (int i = 0; i < 4; i++) {
                    if (x + i + 1 < 19 && grid[x + i + 1][y] == color) flag = 1;
                    else {
                        flag = 0;
                        break;
                    }
                }

                if (flag) {
                    ans = color;
                    row = x + 2;
                    col = y;
                    break;
                }

                //left
                for (int i = 0; i < 4; i++) {
                    if (y - i - 1 >= 0 && grid[x][y - i - 1] == color) flag = 1;
                    else {
                        flag = 0;
                        break;
                    }
                }

                if (flag) {
                    ans = color;
                    row = x;
                    col = y - 2;
                    break;
                }               

                //right
                for (int i = 0; i < 4; i++) {
                    if (y + i + 1 < 19 && grid[x][y + i + 1] == color) flag = 1;
                    else {
                        flag = 0;
                        break;
                    }
                }

                if (flag) {
                    ans = color;
                    row = x;
                    col = y + 2;
                    break;
                }

                for (int i = 0; i < 4; i++) {
                    if (x - i - 1 >= 0 && y - i - 1 >= 0 && grid[x - i - 1][y - i - 1] == color) flag = 1;
                    else {
                        flag = 0;
                        break;
                    }
                }

                if (flag) {
                    ans = color;
                    row = x - 2;
                    col = y - 2;
                    break;
                }

                for (int i = 0; i < 4; i++) {
                    if (x + i + 1 < 19 && y + i + 1 < 19 && grid[x + i + 1][y + i + 1] == color) flag = 1;
                    else {
                        flag = 0;
                        break;
                    }
                }

                if (flag) {
                    ans = color;
                    row = x + 2;
                    col = y + 2;
                    break;
                }

                for (int i = 0; i < 4; i++) {
                    if (x - i - 1 >= 0 && y + i + 1 < 19 && grid[x - i - 1][y + i + 1] == color) flag = 1;
                    else {
                        flag = 0;
                        break;
                    }
                }

                if (flag) {
                    ans = color;
                    row = x - 2;
                    col = y + 2;
                    break;
                }

                for (int i = 0; i < 4; i++) {
                    if (x + i + 1 < 19 && y - i - 1 >= 0 && grid[x + i + 1][y - i - 1] == color) flag = 1;
                    else {
                        flag = 0;
                        break;
                    }
                }

                if (flag) {
                    ans = color;
                    row = x + 2;
                    col = y - 2;
                    break;
                }

            }
        }
        if (flag) break;
    }

    if (flag) {
        cout << ans << endl;
        cout << row + 1 << " " << col + 1;
    }
    else {
        cout << 0;
    }

    
    return 0;
}