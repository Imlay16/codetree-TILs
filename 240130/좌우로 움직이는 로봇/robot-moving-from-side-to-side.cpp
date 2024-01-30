#include <iostream>
#include <string.h>
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
    int time_a = 0;
    int time_b = 0;

    for (int i = 0; i < n; i++) {
        cin >> time >> dir;
        time_a += time;

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
    int start_a = start;

    start = 0;
    index = 1;

    for (int i = 0; i < m; i++) {
        cin >> time >> dir;
        time_b += time;

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
    int start_b = start;

    int cnt = 0;

    if (time_a >= time_b) {
        time = time_a;
        
        for (int i = time_b; i < time_a; i++) {
            b[i] = start_b;
        }
        
    }
    else {
        time = time_b;

        for (int i = time_a; i < time_b; i++) {
            a[i] = start_a;
        }
    }
    

    
    for (int i = 1; i < time; i++) {

        if (a[i] == b[i] && a[i - 1] != b[i - 1]) {
            cnt++;
        }
    }

    
    cout << cnt;

    return 0;
}