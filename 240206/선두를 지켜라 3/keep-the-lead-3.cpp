#include <iostream>
using namespace std;

#define MAX_N 1000000

int A[MAX_N + 1];
int B[MAX_N + 1];
int rankk[MAX_N + 1];

int main() {

    int n, m;

    cin >> n >> m;

    int velocity;
    int time;
    int index = 1;
    int start = 0;
    int MAX_TIME = 0;

    for (int i = 0; i < n; i++) {
        cin >> velocity >> time;

        for (int j = 0; j < time; j++) {
            A[index++] = start + velocity;
            start += velocity;
        }
        MAX_TIME += time;
    }

    index = 1;
    start = 0;

    for (int i = 0; i < m; i++) {
        cin >> velocity >> time;

        for (int j = 0; j < time; j++) {
            B[index++] = start + velocity;
            start += velocity;
        }
    }

    for (int i = 1; i < MAX_TIME; i++) {
        if (A[i] > B[i]) rankk[i] = 1;
        else if (A[i] < B[i]) rankk[i] = 2;
        else if (A[i] == B[i]) rankk[i] = 3;
    }
    
    int cnt = 0;
    for (int i = 1; i < MAX_TIME; i++) {
        if (rankk[i] != rankk[i - 1]) cnt++;
    }

    cout << cnt;
    return 0;
}