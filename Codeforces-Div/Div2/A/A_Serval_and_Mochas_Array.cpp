//  A. Serval and Mocha's Array

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int lgcd = INT_MAX;
        //bool flag = true;
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < n; ++j) {
                // if minm<=2 then true
                int prefixgcd = __gcd(v[i],v[j]);
                lgcd = min(prefixgcd, lgcd);
            }
        }

        if (lgcd<=2)
            cout << "Yes\n";
        else
            cout << "No\n";

    }
    return 0;
}
