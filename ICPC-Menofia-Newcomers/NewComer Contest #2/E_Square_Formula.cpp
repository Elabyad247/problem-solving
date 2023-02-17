//  E. Square Formula

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    int count = 0;
    for (int i = 0; i <= sqrt(n); i++) {
        for (int j = 0; j <= sqrt(n); ++j) {
            long long res = i*i + j*j;
            if(n == res) {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}
