#include <iostream>
#include <cstring>
using namespace std;

int main() {

    int n;
    cin >> n;

    string str;
    cin >> str;

    int size = str.size();

    int cnt = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                if (str[i] == 'C' && str[j] == 'O' && str[k] == 'W') cnt++;
            }
        }
    }
    
    cout << cnt;

    return 0;
}