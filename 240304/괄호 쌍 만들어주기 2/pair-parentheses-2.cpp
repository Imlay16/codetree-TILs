#include <iostream>
#include <cstring>
using namespace std;


int main() {

    string str;
    cin >> str;

    int cnt = 0;
    int len = str.length();

    for (int i = 0; i < len; i++) {

        if (str[i] == '(' && str[i + 1] == '(') {
            
            for (int j = i + 2; j < len - 1; j++) {
                if (str[j] == ')' && str[j + 1] == ')') {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}