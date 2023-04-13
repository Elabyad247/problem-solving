//  B. Grid Reconstruction


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
    vvi v(2);
    v[0] = vi(n);
    v[1] = vi(n);
    v[0][0] = 2*n;
    v[1][n-1] = 2*n - 1;
    int f = 1, l = 2*n - 2;
    for (int i = 1; i < n; i+=2) {
        v[0][i] = f+1;
        f+=2;
    }
    for (int i = 2; i < n; i+=2) {
        v[0][i] = l;
        l-=2;
    }
    f = 1, l = 2*n - 2;
    for (int i = 0; i < n-1; i+=2) {
        v[1][i] = f;
        f+=2;
    }
    for (int i = 1; i < n-1; i+=2) {
        v[1][i] = l-1;
        l-=2;
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
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