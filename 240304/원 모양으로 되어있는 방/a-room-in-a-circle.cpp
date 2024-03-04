#include <iostream>
#include <climits>

using namespace std;
#define MAX_N 100
int people[MAX_N];

int main() {
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> people[i];
    }

    // 시작점을 각 방으로 설정해 놓고 모든 거리 구해보기. 

    long min = INT_MAX;
    long total = 0;

    for (int i = 0; i < n; i++) {
        // 거리 구하는 공식.
        long distance = 1;
        total = 0;

        for (int j = i + 1; j < n; j++) {
            total += people[j] * distance;

            distance++;
        }

        for (int k = 0; k < i; k++) {
            total += people[k] * distance;

            distance++;
        }

        if (min > total) min = total;
    }

    cout << min;
    return 0;
}