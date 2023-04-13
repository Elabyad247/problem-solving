//  B. Ideal Point

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {

        int n,k;
        cin >> n >> k;
        pair<int, int> p[n];
        int lk=0,rk=0;
        for (int i = 0; i < n; ++i) {
            int l,r;
            cin >> l >> r;
            p[i].first = l;
            p[i].second = r;
        }

        for (int i = 0; i < n; ++i) {
            if (p[i].first==k) {
                lk++;
            }
            if (p[i].second==k) {
                rk++;
            }
        }

        if (lk>=1 && rk>=1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }


    }
    return 0;
}
