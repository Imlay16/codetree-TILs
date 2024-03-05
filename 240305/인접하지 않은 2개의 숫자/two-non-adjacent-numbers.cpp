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

        for (int j = i + 2; j < n; j++) {

            if (max < num[i] + num[j]) {
                max = num[i] + num[j];
            }
        }
    }

    cout << max;

    return 0;
}