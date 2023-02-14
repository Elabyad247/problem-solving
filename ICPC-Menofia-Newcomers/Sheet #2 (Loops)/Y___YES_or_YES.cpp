#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        bool flag = false;
        char y,e,s;
        cin >> y >> e >> s;

        if ((y == 'Y' || y == 'y') && (e == 'E' || e == 'e') && (s == 'S' || s == 's')) {
            flag = true;
        }

        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
