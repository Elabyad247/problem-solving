//  A. Walking Master


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
    ll a, b, c, d, count = 0;
    cin >> a >> b >> c >> d;
    if (a==c && b==d) {
        cout << "0\n";
        return;
    }

    if (b>d) {
        cout << "-1\n";
        return;
    }

    if ((a-b)-(c-d)<0) {
        cout << "-1\n";
        return;
    }

    ll res = a-2*b+2*d-c;
    cout << res << "\n";
}

int main() {
    io;
    ll tests = 1;
    cin >> tests;
    while (tests--) {
        solve();
    }
    return 0;
}