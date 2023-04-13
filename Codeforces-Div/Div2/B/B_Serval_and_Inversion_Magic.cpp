//  B. Serval and Inversion Magic

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector <int> v;
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = true;
        for (int i = 0; i < n/2; i++) {
            if (s[i] != s[n-i-1]) {
                flag = false;
            }
        }
        if (flag) {
            cout << "Yes\n";
            continue;
        }

        int i = 0;
        for (; i < n; i++) {
            if (s[i] != s[n-i-1]) {
                break;
            }
        }
        for (; i <= n-i-1; i++) {
            if (s[i] != s[n-i-1]) {
                if (s[i]=='0')
                    s[i]='1';
                else
                    s[i]='0';
            } else {
                break;
            }
        }

        string spalin = s;
        reverse(spalin.begin(),spalin.end());
        if (spalin == s)
            cout << "Yes\n";
        else
            cout << "No\n";

    }
    return 0;
}
