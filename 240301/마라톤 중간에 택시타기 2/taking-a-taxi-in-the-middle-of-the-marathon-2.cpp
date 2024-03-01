#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX_N 2000
int x[MAX_N], y[MAX_N];
int dis[100];

int main() {
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int min = INT_MAX;

    // 각 체크포인트를 순서대로 건너뛰었을 때의 총 거리를 모두 구하여 비교해봅니다. i번째 체크 포인트를 건너 뛰었을 때는 
    // i-1 번째 체크 포인트 부터 i+1 번째 체크포인트까지의 거리를 구합니다.

    // 처음과 마지막 체크포인트를 제외한 나머지 모든 체크포인트를 순서대로 하나씩 건너뛰었을 때의 거리를 구하면 됨.

    for (int i = 1; i < n - 1; i++) {

        int total = 0;
        int prev_index = 0;

        for (int j = 1; j < n; j++) {
            
            if (j == i) continue;
            total += abs(x[prev_index] - x[j]) + abs(y[prev_index] - y[j]);
            prev_index = j;
        }
        if (min > total) min = total;
    }

    cout << min;
    return 0;
}