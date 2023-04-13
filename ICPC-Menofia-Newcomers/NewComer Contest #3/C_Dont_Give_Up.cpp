//  C. Don't Give Up

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n ;i++){
            cin>>a[i];
        }

        int maxm = a[0], ans = 1;
        for(int i = 1; i < n ;i++){
            if(a[i] >= maxm){
                maxm = max(maxm, a[i]);
                ans = i+1;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
