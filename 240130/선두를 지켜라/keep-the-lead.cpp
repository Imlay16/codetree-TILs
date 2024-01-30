#include <iostream>
using namespace std;

#define MAX_N 1000000
int A[MAX_N + 1];
int B[MAX_N + 1];
int flag[MAX_N + 1];


int main() {

    // 선두가 바뀌는 순간을 count; 그걸 어떻게 잡을 것인가...?
    int n, m;

    cin >> n >> m;

    int vel;
    int time;
    int index = 1;
    int start = 0;

    for (int i = 0; i < n; i++) {
        cin >> vel >> time;

        for (int j = 0; j < time; j++) {
            A[index++] = start + vel;
            start += vel;
        }
    }

    index = 1;
    start = 0;

    for (int i = 0; i < m; i++) {
        cin >> vel >> time;

        for (int j = 0; j < time; j++) {
            B[index++] = start + vel;
            start += vel;
        }
    }

    int cnt = 0;
    int flag;
    int signal;
    if (A[1] > B[1]) flag = 1;
    else flag = 2;
    
    for (int i = 2; i < MAX_N + 1; i++) {

        if (A[i] > B[i]) signal = 1;
        else signal = 2;

        if (flag != signal) {
            cnt++;
            flag = signal;
        }
        
    }
    
    cout << cnt;
    return 0;
}