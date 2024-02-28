#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX_N 2000
#define OFF_SET 1000

int x[MAX_N], y[MAX_N];
int dis[100];

int main() {
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];

        x[i] += OFF_SET;
        y[i] += OFF_SET;
    }

    for (int i = 0; i < n - 1; i++) {
        int distance = abs(x[i] - x[i + 1]) + abs(y[i] - y[i + 1]);
        dis[i] = distance;
    }

    int min = INT_MAX;
    int total = 0;

    for (int i = 0; i < n; i++) {
        total += dis[i];
    }

    for (int i = 1; i < n - 1; i++) {
        total -= dis[i];

        if (min > total) min = total;
        
        total += dis[i];
    }

    cout << min;
    return 0;
}