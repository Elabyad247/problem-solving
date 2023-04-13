//  A. Easy Problem Don't Worry

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n,k;
    cin >> k >> n;
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        sum+=x;
    }
    if (sum <= k)
        cout << "Hard";
    else
        cout << "Easy";

    return 0;
}
