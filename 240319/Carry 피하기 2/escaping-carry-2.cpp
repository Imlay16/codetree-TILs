#include <iostream>
#include <climits>
#include <cstring>
#include <string>
using namespace std;

#define MAX_N 20
int num[MAX_N];

int carry(int num1, int num2) {

    int flag = 1;
    
    int max_num = max(num1, num2);
    int min_num = min(num1, num2);

    string max_str = to_string(max_num);
    string min_str = to_string(min_num);

    int diff = max_str.length() - min_str.length();

    int len = min_str.length();
    for (int i = 0; i < len; i++) {
        if (max_str[len - i - 1 + diff] - '0' + min_str[len - i - 1] - '0' >= 10) {
            flag = 0;
            return flag;
        }
    }
    return flag;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    int max = INT_MIN;

    int flag = 1;
    int total = 0;
    for (int i = 0; i < n; i++) {
        total = num[i];
        for (int j = i + 1; j < n; j++) {
            flag = carry(total, num[j]);

            if (flag) {
                total += num[j];
            }
            else {
                break;
            }
            for (int k = j + 1; k < n; k++) {
                int nums = total;

                flag = carry(total, num[k]);

                if (flag) {
                    nums += num[k];
                }
                else {
                    break;
                }

                if (max < nums) {
                    max = nums;
                }
            }
            if (flag == 0) break;
        }
        if (flag == 0) break;
    }
    
    if (flag) {
        cout << max;
    }
    else {
        cout << -1;
    }

    return 0;
}