#include <iostream>
#include <climits>
#include <cstring>
#include <string>
using namespace std;

#define MAX_N 20
int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {

                bool carry = false;

                if (arr[i] % 10 + arr[j] % 10 + arr[k] % 10 >= 10) {
                    carry = true;
                }

                if (arr[i] % 100 / 10 + arr[j] % 100 / 10 + arr[k] % 100 / 10>= 10) {
                    carry = true;
                }

                if (arr[i] % 1000 / 100 + arr[j] % 1000 / 100 + arr[k] % 1000 / 100 >= 10) {
                    carry = true;
                }

                if (arr[i] % 10000 / 1000 + arr[j] % 10000 / 1000 + arr[k] % 10000 / 1000 >= 10) {
                    carry = true;
                }

                if (carry == false) {
                    int total = arr[i] + arr[j] + arr[k];
                    if (max < total) {
                        max = total;
                    }
                }
            }
        }
    }
    
    cout << max;

    return 0;
}