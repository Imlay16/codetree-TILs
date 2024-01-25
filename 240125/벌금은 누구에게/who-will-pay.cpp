#include <iostream>
using namespace std;

#define MAX_N 100
int student[MAX_N];

int main() {

    int n, m, k;
    cin >> n >> m >> k;

    int num;

    int ans = -1;

    for (int i = 0; i < m; i++) {
        cin >> num;
        student[num - 1]++;

        if (student[num - 1] == k) {
            ans = num;
            break;
        }
        else {
            for (int j = 0; j < MAX_N; j++) {
                if (student[j] >= k) {
                    ans = j + 1;
                    break;
                }
            }
        }
    }

    cout << ans;
    


    // 여기에 코드를 작성해주세요.
    return 0;
}