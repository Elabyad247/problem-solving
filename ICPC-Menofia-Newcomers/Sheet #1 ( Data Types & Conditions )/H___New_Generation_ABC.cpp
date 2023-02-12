#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N <= 125)
        cout << 4;
    else if (N <= 211)
        cout << 6;
    else
        cout << 8;
}
