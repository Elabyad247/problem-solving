#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    char c;
    cin >> x >> c >> y;
    if (0 <= y && y <= 2)
        cout << x << '-';
    else if (3 <= y && y <= 6)
        cout << x;
    else if (7 <= y && y <= 9)
        cout << x << '+';
}
