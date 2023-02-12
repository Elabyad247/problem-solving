#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a>b && a>c) {
            if (b>c) {
                cout << b << endl;
            }
            else {
                cout << c << endl;
            }
        }
        else if (a<b && a>c) {
            cout << a<< endl;
        }
        else if (a>b && a<c) {
            cout << a<< endl;
        }
        else if (a<b && a<c) {
            if (b>c) {
                cout << c << endl;
            }
            else {
                cout << b << endl;
            }
        }
    }

    return 0;
}
