//  A. Counterexample


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

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }

    return gcd(b,a%b);
}

void solve() {
    ll l, r, a, b, c;
    cin >> l >> r;

    bool flag = false;
    for(ll i = l; i <= r; i++) {
        for(ll j = i+1; j <= r; j++) {
            for(ll k = j+1; k <= r; k++) {
                ll x = gcd(i, j);
                ll y = gcd(j, k);
                ll z = gcd(i, k);
                if (x == 1 && y == 1 && z != 1) {
                    a = i, b = j, c = k;
                    flag = true;
                    break;
                }
            }
        }
    }

    if (flag) {
        cout << a << " " << b << " " << c;
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