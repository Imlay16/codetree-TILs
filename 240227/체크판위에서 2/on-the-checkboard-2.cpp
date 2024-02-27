#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_R 15
#define MAX_C 15

int R, C;

char grid[MAX_R][MAX_C];

int main() {
   
   cin >> R >> C;

   char spot;

   for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }

    int cnt = 0;
    int ans = 0;

    int r_pos, c_pos;

    char prev;
    int flag = 1;

    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            r_pos = i;
            c_pos = j;

            cnt = 0;

            for (int i = 0; i < R; i++) {
                for (int j = 0; j < C; j++) {
                    if (grid[i][j] == grid[r_pos][c_pos]) {

                        prev = 'W';
                    }   
                    else {

                        prev = 'B';
                    }

                    for (int k = i + 1; k < R; k++) {
                        for (int l = j + 1; l < C; l++) {

                            if (grid[k][l] != prev) {

                                r_pos = k;
                                c_pos = l;

                                i = k + 1;
                                j = l + 1;
                                cnt++;

                                flag = 2;
                                break;
                            }
                        }
                        if (flag == 2) break;
                    }
                }
            }
            if (cnt == 2) ans++;
        }
    }
    
    cout << ans;
    return 0;
}