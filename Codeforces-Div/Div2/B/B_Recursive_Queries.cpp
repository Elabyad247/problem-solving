//  B. Recursive Queries


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


vector<vector<ll>> arr(1e6+1, vector<ll>(11));

int fun(ll n){
    if (n < 10)
        return n;
    ll p = 1;
    while (n != 0) {
        if (n%10 != 0) {
            p = p * (n%10);
        }
        n /= 10;
    }
    return fun(p);
}

void solve() {
    ll l, r, k;
    cin >> l >> r >> k;
    cout << arr[r][k] - arr[l-1][k] << "\n";
}

int main() {
    io;
    for(int i = 1; i <= 1e6; i++){
        ll x = fun(i);
        arr[i] = arr[i-1];
        arr[i][x]++;
    }
    ll tests = 1;
    cin >> tests;
    while (tests--) {
        solve();
    }
    return 0;
}