#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {

    string num;
    cin >> num;

    for (int i = 0; i < num.length(); i++) {
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

    cout << total;

    return 0;
}