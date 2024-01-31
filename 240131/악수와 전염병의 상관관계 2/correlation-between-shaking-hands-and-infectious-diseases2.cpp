#include <iostream>
using namespace std;

#define TIME 250
int hand_shake[TIME][2];

int main() {
    
    int N, K, P, T;
    int t, x, y;

    cin >> N >> K >> P >> T;

    int contact[N] = { 0, };
    int infected[N] = { 0, };

    infected[P - 1] = 1;
    contact[P - 1] = K;

    int time = 0;

    for (int i = 0; i < T; i++) {
        cin >> t >> x >> y;

        if (time < t) time = t;

        hand_shake[t][0] = x;
        hand_shake[t][1] = y;
    }

    for (int i = 0; i < time; i++) {

        int index1 = hand_shake[i][0] - 1;
        int index2 = hand_shake[i][1] - 1;

        if (infected[index1] && contact[index1]) {
            infected[index2] = 1;
            contact[index2] = K;
            contact[index1]--;
        }
        else if (infected[index2] && contact[index2]) {
            infected[index1] = 1;
            contact[index1] = K;
            contact[index2]--;
        }
        else {

        }
    }

    for (int i = 0; i < N; i++) {
        cout << infected[i];
    }

    return 0;
}