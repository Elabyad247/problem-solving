#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isprime = true;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            isprime = false;
            break;
        }
    }
    if (isprime) {
        cout << n;
    } else {
        int upper = 0, lower = 0;
        int temp;
        temp = n + 1;
        while (true) {
            isprime = true;
            for (int i = 2; i < temp; ++i) {
                if (temp % i == 0) {
                    isprime = false;
                    break;
                }
            }
            if (isprime) {
                upper = temp;
                break;
            } else {
                temp++;
            }
        }

        temp = n - 1;
        while (true) {
            isprime = true;
            for (int i = 2; i < temp; ++i) {
                if (temp % i == 0) {
                    isprime = false;
                    break;
                }
            }
            if (isprime) {
                lower = temp;
                break;
            } else {
                temp--;
            }
        }

        int difupper = upper - n;
        int diflower = n - lower;

        if (diflower == difupper) {
            cout << lower << " " << upper;
        } else if (diflower < difupper) {
            cout << lower;
        } else if (difupper < diflower) {
            cout << upper;
        }
    }

    return 0;
}
