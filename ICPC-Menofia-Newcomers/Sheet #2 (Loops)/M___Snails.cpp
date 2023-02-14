#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a,b;
        cin >> n >> a >> b;
        int count = 0;
        if (a >= n) {
            cout << 1 << endl;
        } else if (a<=b) {
            cout << -1 << endl;
        } else {
            int climb = n;
            while (climb>0) {
                climb = climb - a;
                if (climb>0) {
                    climb = climb + b;
                }
                count++;
            }
            cout << count << endl;
        }

    }
    return 0;
}
