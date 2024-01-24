#include <iostream>
using namespace std;

#define MAX_N 1000
int number[MAX_N];

int main() {
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }

    int count = 0;
    int len = 0;

    for (int i = 0; i < n; i++) {
        if (i >= 1 && !(number[i] * number[i - 1] < 0)) {
            count++;
        }
        else {
            count = 1;
        }
        len = max(len, count);
    }

    cout << len;

    return 0;
}