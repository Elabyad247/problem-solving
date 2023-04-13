//  B. Appleman and Card Game


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
    ll n, k;
    cin >> n >> k;
    map<char, ll> mp;
    for (int i = 0; i < n ; ++i) {
        char c;
        cin >> c;
        mp[c]++;
    }
    vll v;
    for (auto i: mp) {
        v.push_back(i.second);
    }
    sort(v.begin(), v.end(), greater<ll>());
    ll res = 0;
    int i = 0;
    while (k) {
        if (k >= v[i]){
            res += (v[i]*v[i]);
            k -= v[i];
        } else {
            res += (k*k);
            k = 0;
        }
        i++;
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