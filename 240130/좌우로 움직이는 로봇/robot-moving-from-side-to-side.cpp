#include <iostream>
using namespace std;

#define MAX_N 1000000

int a[MAX_N + 1];
int b[MAX_N + 1];

int main() {
    
    int n, m;

    cin >> n >> m;

    int time;
    char dir;

    int start = 0;
    int distance = 0;
    int index = 1;

    for (int i = 0; i < n; i++) {
        cin >> time >> dir;

        if (dir == 'L') {
            for (int j = 0; j < time; j++) {
                start--;
                a[index++] = start;
            }
        }
        else {
            for (int j = 0; j < time; j++) {
                start++;
                a[index++] = start; 
            }
        }
    }

    start = 0;
    index = 1;

    for (int i = 0; i < m; i++) {
        cin >> time >> dir;

        if (dir == 'L') {
            for (int j = 0; j < time; j++) {
                start--;
                b[index++] = start;
            }
        }
        else {
            for (int j = 0; j < time; j++) {
                start++;
                b[index++] = start;
            }
        }
    }

    int cnt = 0;

    for (int i = 1; i < MAX_N; i++) {

        if (a[i] == b[i] && a[i - 1] != b[i - 1]) cnt++;

    }

    cout << cnt;

    return 0;
}