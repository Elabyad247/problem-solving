//  A. Two Towers

#include<bits/stdc++.h>

using namespace std;

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        stack<char> vn,vm;
        bool check1 = true , check2 = true;
        int cntn = 0, cntm = 0;
        char old = '1';
        for (int i = 0; i < n; ++i) {
            char c;
            cin >> c;
            if (c!=old) {
                old = c;
            } else {
                check1 = false;
                cntn++;
            }
            vn.push(c);
        }
        old = '1';
        for (int i = 0; i < m; ++i) {
            char c;
            cin >> c;
            if (c!=old) {
                old = c;
            } else {
                check2 = false;
                cntm++;
            }
            vm.push(c);
        }

        if (check1 && check2) {
            cout << "YES\n";
            continue;
        }
        if (!check1 && !check2) {
            cout << "NO\n";
            continue;
        }
        if (vn.top()==vm.top()) {
            cout << "NO\n";
            continue;
        }
        if (cntn>1 || cntm >1) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

    }
    return 0;
}
