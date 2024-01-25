#include <iostream>
using namespace std;

#define MAX_N 100000

int A[MAX_N];
int B[MAX_N];


int main() {

    int n, m;
    cin >> n >> m;

    int distance;
    char direction;

    int start = 0;
    int time = 0;

    for (int i = 0; i < n; i++) {
        cin >> direction >> distance;

        if (direction == 'L') {
            for (int j = 0; j < distance; j++) {
                start--;
                A[time++] = start;
                
            }
        } 
        else {
            for (int j = start; j < distance; j++) {
                start++;
                A[time++] = start;
                
            }
        }
    }

    start = 0;
    time = 0;
    for (int i = 0; i < m; i++) {
        cin >> direction >> distance;

        if (direction == 'L') {
            start--;
            B[time++] = start;
        }
        else {
            start++;
            B[time++] = start;
        }
    }

    int point = -1;

    for (int i = 0; i < MAX_N; i++) {
        if (A[i] == B[i]) {
            point = i;
            break;
        }
    }
    
    cout << point;
    // 여기에 코드를 작성해주세요.
    return 0;
}