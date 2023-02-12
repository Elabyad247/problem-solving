#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, suma = 0, sumd = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        if (c == 'A') {
            suma++;
        } else if (c == 'D') {
            sumd++;
        }
    }
    if (suma > sumd) {
        cout << "Anton";
    } else if (suma < sumd) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }

    return 0;
}