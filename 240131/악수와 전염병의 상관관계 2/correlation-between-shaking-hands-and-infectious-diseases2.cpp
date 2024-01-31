#include <iostream>
using namespace std;

#define TIME 250
int hand_shake[TIME][2];
int contact[100];
int infected[100];

int main() {
    
    int N, K, P, T;
    int t, x, y;

    cin >> N >> K >> P >> T;

    for (int i = 0; i < T; i++) {
        cin >> t >> x >> y;

        hand_shake[t][0] = x;
        hand_shake[t][1] = y;
    }

    
    contact[P] = K;

    for (int i = 0; i < TIME; i++) {

        if (hand_shake[i][0] == P) {
            
            if (contact[i] > 0) {

                infected[hand_shake[i][1]] = 1;
                P = hand_shake[i][1];
            }
        }
        else if (hand_shake[i][1] == P) {

            if (contact[i] > 0) {

                infected[hand_shake[i][0]] = 1;
                P = hand_shake[i][0];
            }
        }
        
    }

    for (int i = 0; i < 100; i++) {
        cout << infected[i];
    }

    return 0;
}