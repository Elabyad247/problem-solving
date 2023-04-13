//  E. You Can Do It

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        while(n){
            if(n < 10)
                ans += n;
            else
                ans += 9;
            n/=10;
        }

        cout << ans << "\n";
    }
    return 0;
}
