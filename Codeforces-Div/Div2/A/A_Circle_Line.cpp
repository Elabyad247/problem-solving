//  A. Circle Line


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
    vi v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int s, t;
    cin >> s >> t;
    s--;
    t--;
    int l = 0, r = 0;
    if (s > t) {
        for (int i = t; i < s; i++){
            r += v[i];
        }
        for (int i = s; i < n + t; i++){
            if (i >= n) {
                l += v[i-n];
            } else {
                l += v[i];
            }
        }
    } else {
        for (int i = s; i < t; i++){
            r += v[i];
        }
        for (int i = t; i < n + s; i++){
            if (i >= n) {
                l += v[i-n];
            } else {
                l += v[i];
            }
        }
    }

    cout << min(l, r);
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