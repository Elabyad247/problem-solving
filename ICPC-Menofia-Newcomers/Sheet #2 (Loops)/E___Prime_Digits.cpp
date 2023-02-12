#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long count = 0;
    while (n != 0) {
        long long last = n % 10;
        n /= 10;
        if (last == 2 || last == 3 || last == 5 || last == 7) {
            count++;
        }
    }
    cout << count;
    return 0;
}
