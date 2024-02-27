#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int changeNum(string num, int flag) {
    for (int i = 0; i < num.length() - flag; i++) {
        if (num[i] == '0') {
            num[i] = '1';
            break;
        }
    }

    int len = num.length();

    int total = 0;
    int change = 1;

    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1') {
            total += change;
        }
        change *= 2;
    }
    return total;
}

int main() {

    string num;
    cin >> num;

    int flag = 0;

    int len = num.length();

    if (len == 1) {
        if (num[0] == '0') cout << 1;
        else cout << 0;
    }
    else {

        if (!(num.find('0') != string::npos)) {
            num[len - 1] = '0';
            flag = 1;
            int number = changeNum(num, flag);
            cout << number;
        }
        else {
            int number = changeNum(num, flag);
            cout << number;
        }
    }

    return 0;
}