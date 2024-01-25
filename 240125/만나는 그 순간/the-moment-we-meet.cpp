#include <iostream>
using namespace std;

#define MAX_N 1000000

int A[MAX_N];
int B[MAX_N];


int main() {

    int n, m;
    cin >> n >> m;

    int distance;
    char direction;

    int start = 0;
    int time = 1;

    for (int i = 0; i < n; i++) {
        cin >> direction >> distance;

        if (direction == 'L') {
            for (int j = 0; j < distance; j++) {
                start--;
                A[time++] = start;
                
            }
        } 
        else {
            for (int j = 0; j < distance; j++) {
                start++;
                A[time++] = start;
                
            }
        }
    }

    start = 0;
    time = 1;
    for (int i = 0; i < m; i++) {
        cin >> direction >> distance;

        if (direction == 'L') {
            for (int j = 0; j < distance; j++) {
                start--;
                B[time++] = start;
            }
            
        }
        else {
            for (int j = 0; j < distance; j++) {
                start++;
                B[time++] = start;
            }
        }
    }

    int point = -1;

    for (int i = 1; i < MAX_N; i++) {
        if (A[i] == B[i] && i < time) {
            point = i;
            break;
        }
    }
    
    cout << point << endl;
  
    // 여기에 코드를 작성해주세요.
    return 0;
}