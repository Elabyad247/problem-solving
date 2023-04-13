//  A. Valera and X


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
    vector<vector<char>> v(n+1);
    for (int i = 1; i <= n; ++i) {
        v[i] = vector<char>(n+1);
        for (int j = 1; j <= n; ++j) {
            cin >> v[i][j];
        }
    }
    char d = v[1][1], o = v[1][2];
    if (d == o) {
        cout << "NO";
    } else {
        bool flag = true;
        for ( int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i==j || i+j==n+1) {
                    if (v[i][j] != d) {
                        flag = false;
                    }
                } else {
                    if (v[i][j] != o) {
                        flag = false;
                    }
                }
            }
        }
        if (flag) {
            cout << "YES";
        } else {
            cout << "NO";
        }
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