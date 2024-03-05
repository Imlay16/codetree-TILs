#include <iostream>
#include <climits>
using namespace std;

#define MAX_N 100
int num[MAX_N];

int main() {
    
    int n;
    cin >> n;

    int max = INT_MIN;
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < n-1; i++) {

        int prev_index = i - 1;
        int next_index = i + 1;

        total = num[i];

        for (int j = 0; j < n; j++) {

            if ((i != 0 && j == prev_index) || j == next_index || j == i) continue;

            total += num[j];

            if (max < total) max = total;
            total -= num[j];
        }
    }

    cout << max;

    return 0;
}