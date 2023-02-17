//  C. playing with numbers

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n,x,y;
    cin >> n >> x >> y;
    long long num1 = n%y;
    long long sum1 = num1*x;
    long long sum2 = (n*x)%y;

    cout << sum1 << " " << sum2;
    
    return 0;
}
