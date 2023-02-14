#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            char bit;
            cin >> bit;
            if (bit == '1') {
                sum += 90;
            } else if (bit == '0') {
                sum -= 90;
            }
        }
        if (sum>360) {
            while (sum>360) {
                sum -= 360;
            }
        } else if (sum<0) {
            while (sum<0) {
                sum += 360;
            }
        }

        // E = 0 or 360 or -360, N = 90 or -270, W = 180 or -180, S = 270 or -90
        if (sum == 0 || sum == 360 || sum == -360) {
            cout << "E\n";
        } else if (sum == 90 || sum == -270) {
            cout << "N\n";
        } else if (sum == 180 || sum == -180) {
            cout << "W\n";
        } else if (sum == 270 || sum == -90) {
            cout << "S\n";
        }
    }
    return 0;
}
