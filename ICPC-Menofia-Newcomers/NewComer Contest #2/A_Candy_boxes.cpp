//  A. Candy boxes

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long count = 0;
    long long res = 0;
    while (count != 4) {
        res = n%10;
        n /= 10;
        count++;
    }
    cout << res;
    return 0;
}
