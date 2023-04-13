//  B. Jzzhu and Sequences


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
    ll mod = 1000000007;
    ll x, y, n, num;
    cin >> x >> y >> n;
    if (n % 6 == 1) {
        num = x;
    } else if (n % 6 == 2) {
        num = y;
    } else if (n % 6 == 3) {
        num = y - x;
    } else if (n % 6 == 4) {
        num = -x;
    } else if (n % 6 == 5) {
        num = -y;
    } else {
        num = x - y;
    }

    if (num < 0) {
        cout << ((num % mod) + mod) % mod;
    } else {
        cout << num % mod;
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