#include <iostream>
using namespace std;

#define MAX_N 1000
int number[MAX_N];

int main() {
    
    int n, t;
    cin >> n >> t;

    int ans = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }

    for (int i = 0; i < n; i++) {
        if (number[i] > t) {

            cnt++;
            
        }
        else {
            
            cnt = 0;
        }

        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}