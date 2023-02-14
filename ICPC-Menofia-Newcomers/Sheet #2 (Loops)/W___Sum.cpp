#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        bool flag = false;
        if (a+b==c || a+c==b || b+c==a){
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
