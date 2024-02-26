#include <iostream>
#include <cstring>

using namespace std;


int main() {
    
    string str;
    cin >> str;

    int total_num = 0;
    int len = str.length();
    for (int i = 0; i < len; i++) {
        
        if (str[i] == '(') {
            
            for (int j = i + 1; j < len; j++) {
                if (str[j] == ')') {
                    total_num++;
                }
            }
        }
    }

    cout << total_num;

    return 0;
}