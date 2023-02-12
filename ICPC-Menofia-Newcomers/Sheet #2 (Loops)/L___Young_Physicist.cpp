#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sumx=0,sumy=0,sumz=0;
    while (n--) {
        int x,y,z;
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }

    if (sumx == 0 && sumy == 0 & sumz == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
