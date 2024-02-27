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

        for (int j = 0; j < num.length(); j++) {
            number = number * 2 + (num[j] - '0');
        } 

        ans = max(ans, number);

        num[i] = '0' + '1' - num[i];
    }

    cout << ans;

    return 0;
}