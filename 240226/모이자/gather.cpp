#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

#define MAX_N 100
int people[MAX_N];

int main() {

    int n;

    cin >> n;

    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> people[i];
    }

    int total_distance;
    int dist = 0;

    for (int i = 0; i < n; i++) {
        total_distance = 0;

        for (int j = 0; j < n; j++) {
            total_distance += abs(j - i) * people[j];
        }
        
        if (min > total_distance) {
            min = total_distance;
        }
    }
    cout << min;
    
    return 0;
}