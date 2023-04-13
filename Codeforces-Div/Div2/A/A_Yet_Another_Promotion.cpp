//  A. Yet Another Promotion

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin >> a >> b;
        long long n,m;
        cin >> n >> m;
        if (n<=m) {
            cout << n * min(a,b) << endl;
        } else {

        }
    }
    return 0;
}
