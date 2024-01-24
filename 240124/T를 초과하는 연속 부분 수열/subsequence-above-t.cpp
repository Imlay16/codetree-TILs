#include <iostream>
using namespace std;

#define MAX_N 1000
int number[MAX_N];

int main() {
    
    int n, t;
    cin >> n >> t;

    int ans = 0;
    int cnt;

    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }

    for (int i = 0; i < n; i++) {
        if (i >= 1 && number[i] > t) {
            cnt++;
        }
        else {
            cnt = 1;
        }
        ans = max(ans, cnt);
    }

    cout << ans - 1;

    return 0;
}