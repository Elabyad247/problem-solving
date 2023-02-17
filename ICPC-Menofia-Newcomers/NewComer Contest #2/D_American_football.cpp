//  D. American football

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,a,b,s;
    cin >> n >> a >> b >> s;

    if (n==1) {
        if (a==b && a==s) {
            cout << "YES";
            return 0;
        } else {
            cout << "NO";
            return 0;
        }
    }

    if (n==2) {
        if (a+b==s) {
            cout << "YES";
            return 0;
        } else {
            cout << "NO";
            return 0;
        }
    }

    if (s-a-b<0) {
        cout << "NO";
        return 0;
    }

    s = s - (a+b);
    n -= 2;
    if ((n*a <= s) && (n*b >= s)) {
        cout << "YES";
        return 0;
    } else {
        cout << "NO";
        return 0;
    }



    return 0;
}
