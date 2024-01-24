#include <iostream>
using namespace std;

#define MAX_N 1000
int nums[MAX_N];

int main() {

    int n;
    cin >> n;

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int max = 0;

    for (int i = 0; i < n; i++) {
        if (i == 0 || nums[i] != nums[i - 1]) {
            cnt = 1;
        }
        else {
            cnt = 0;
        }

        if (cnt == 1) {
            max++;
        }
    }

    cout << max;
    
    return 0;
}