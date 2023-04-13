//  G. Don't Hate Me

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n%7 == 0) {
            cout << n << "\n";
        } else {
            n = n - n%10;
            while (n%7 != 0) {
                n++;
            }
            cout << n << "\n";
        }
    }
    return 0;
}
