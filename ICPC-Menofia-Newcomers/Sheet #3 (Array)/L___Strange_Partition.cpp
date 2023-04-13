//  L - Strange Partition


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
    long long n, x;
    cin >> n >> x;
    long long arr[n];
    long long sum = 0;
    long long mn = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mx += ceil((1.0 * arr[i])/x);
        sum += arr[i];
    }
    mn += ceil((1.0 * sum)/x);
    cout << mn << " " << mx << "\n";
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