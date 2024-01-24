#include <iostream>
using namespace std;

#define MAX_N 1000
int number[MAX_N];

int main() {
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }

    int ans = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (i >= 1 && number[i] > number[i - 1]) {
            cnt++;
        }
        else {
            cnt = 1;
        }

        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}