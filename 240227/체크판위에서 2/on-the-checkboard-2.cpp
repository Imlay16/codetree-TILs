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
    // 점프 기능 구현

    for (int i = 0; i < R; i++) {
        cnt = 0;
        for (int j = 0; j < C; j++) {
            for (int k = i + 1; k < R; k++) {
                for (int l = j + 1; l < C; l++) {

                    if (grid[i][j] == 'W') {

                        if (grid[k][l] == 'B') {
                            if (k + 1 < R && j + 1 < C) {
                                i = k + 1;
                                l = j + 1;
                                cnt++;
                            }
                        }
                    }
                    else {
                        
                        if (grid[k][l] == 'W') {
                            if (k +1 < R && j + 1 < C) {
                                i = k + 1;
                                l = j + 1;
                                cnt++;
                            }
                        }
                    }
                }
                if (cnt == 2) ans++;
            }
        }
    }
    
    cout << ans;
    return 0;
}