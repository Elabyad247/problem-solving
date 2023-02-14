#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum1=0, sum2=0;
    for ( int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int num;
            cin >> num;
            if (i==j) {
                sum1 += num;
            }
            if (i+j==n+1) {
                sum2 += num;
            }
        }
    }

    int res = sum1-sum2;
    if (res<0){
        cout << -res;
    } else {
        cout << res;
    }

    return 0;
}
