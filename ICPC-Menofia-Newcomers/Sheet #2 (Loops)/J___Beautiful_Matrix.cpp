#include<bits/stdc++.h>
using namespace std;

int main() {
    int num1;
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++) {
            cin >> num1;
            if (num1 == 1) {
                cout << abs(i - 3) + abs(j - 3) << "\n";
                break;
            }
        }
    }
    return 0;
}
