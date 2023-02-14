#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int height = 1;
        bool flag = true;
        for (int i = 0; i < n; ++i) {
            if (flag) {
                height *= 2;
                flag = false;
            } else {
                height++;
                flag = true;
            }
        }
        cout << height << endl;
    }
    return 0;
}
