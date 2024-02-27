#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <climits>

using namespace std;

int main() {

    string num;
    cin >> num;

    int ans = INT_MIN;

    for (int i = 0; i < num.length(); i++) {

        num[i] = '0' + '1' - num[i];


        int number = 0;
        int digit = 1;

        for (int i = num.length() - 1; i >= 0; i--) {
            number = number + (num[i] - '0') * digit;
            digit *= 2;
        }

        ans = max(ans, number);

        num[i] = '0' + '1' - num[i];
    }

    cout << ans;

    return 0;
}