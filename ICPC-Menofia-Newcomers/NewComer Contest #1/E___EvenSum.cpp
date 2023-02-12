#include<iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    while (t--){
        long long n,m;
        bool flag = true;
        cin >> n >> m;
        if (n%2!=0 || n == 1){
            flag = false;
        } else {
            if (n/2 < m) {
                flag = false;
            }
        }

        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
