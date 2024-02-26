#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100

int key[MAX_N];

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> key[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (key[i] <= key[j] && key[j] <= key[k]) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    
    return 0;
}