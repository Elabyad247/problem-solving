//  A. Ksenia and Pan Scales


#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<vll> vvll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
template<class T>
using pq = priority_queue<T, vector<T>, greater<T>>;

#define io                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    int size1 = s1.size(), size2 = s2.size();
    int c1 = 0, c2 = 0;
    bool flag = true;
    for (int i = 0; i < size1; ++i) {
        if (flag) {
            if (s1[i] == '|') {
                flag = false;
                continue;
            }
            c1++;
        } else {
            c2++;
        }
    }

    if (((size1 + size2 - 1) % 2 == 1) || (abs(c1 - c2) > size2)) {
        cout << "Impossible";
        return;
    } else {
        for (int i = 0; i < c1; ++i) {
            cout << s1[i];
        }
        int w = (size1 + size2 - 1) / 2;
        for (int i = 0; i < w - c1; ++i) {
            cout << s2[i];
        }
        cout << "|";
        for (int i = c1 + 1; i < size1; ++i) {
            cout << s1[i];
        }
        for (int i = 0; i < w - c2; ++i) {
            cout << s2[size2-i-1];
        }
    }

}

int main() {
    io;
    ll tests = 1;
    // cin >> tests;
    while (tests--) {
        solve();
    }
    return 0;
}