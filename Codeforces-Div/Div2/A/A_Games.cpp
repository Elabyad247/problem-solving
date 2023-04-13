//  A. Games


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
    vpll v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    int res = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (v[i].first == v[j].second) {
                res++;
            }
            if (v[i].second == v[j].first) {
                res++;
            }
        }
    }

    cout << res;
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