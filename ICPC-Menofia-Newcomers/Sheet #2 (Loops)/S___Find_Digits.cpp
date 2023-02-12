#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int count = 0;
        int divisor = n%10;
        long long m = n;
        while (m){
            if (divisor!=0 && n%divisor==0) {
                count++;
            }
            m /= 10;
            divisor = m%10;
        }
        cout << count << endl;
    }
    return 0;
}
