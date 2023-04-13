//  B. Effective Approach


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
    ll n;
    cin >> n;
    vll arr(n), Vasya(n), Petya(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        Vasya[arr[i]] = i+1;
        Petya[arr[i]] = n-i;
    }
    ll v = 0, p = 0;
    ll m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        ll x;
        cin >> x;
        v += Vasya[x];
        p += Petya[x];
    }

    cout << v << " " << p;
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