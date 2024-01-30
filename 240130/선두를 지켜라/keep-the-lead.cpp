#include <iostream>
using namespace std;

#define MAX_N 1000000
int A[MAX_N + 1];
int B[MAX_N + 1];
// int flag[MAX_N + 1];


int main() {

    // 선두가 바뀌는 순간을 count; 그걸 어떻게 잡을 것인가...?
    int n, m;

    cin >> n >> m;

    int vel;
    int time;
    int index = 1;
    int start = 0;
    int time_a = 0;

    for (int i = 0; i < n; i++) {
        cin >> vel >> time;

        for (int j = 0; j < time; j++) {
            A[index++] = start + vel;
            start += vel;
            time_a++;
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
    int flag = 0;
   
    
    for (int i = 1; i < time_a; i++) {

        if (A[i] > B[i]) {

            if (flag == 2) cnt++;

            flag = 1;
        }
        else if (A[i] < B[i]) {

            if (flag == 1) cnt++;

            flag = 2;
        }
        
    }
    
    cout << cnt;
    return 0;
}