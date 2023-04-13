//  A. Domino


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
    int n;
    cin >> n;
    int sumx = 0, sumy = 0;
    bool flag = false;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        sumx += x;
        sumy += y;
        if (x%2 != y%2) {
            flag = true;
        }
    }
    if (sumx%2 == 0 && sumy%2 == 0) {
        cout << 0;
    } else if (sumx%2 == 1 && sumy%2 == 1) {
        if (flag) {
            cout << 1;
        } else {
            cout << -1;
        }
    } else {
        cout << -1;
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