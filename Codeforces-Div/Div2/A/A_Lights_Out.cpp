//  A. Lights Out


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

int matrix[5][5];
void solve() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            int x;
            cin >> x;
            matrix[i][j] += x;
            matrix[i - 1][j] += x;
            matrix[i][j - 1] += x;
            matrix[i + 1][j] += x;
            matrix[i][j + 1] += x;
        }
    }

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << 1 - matrix[i][j] % 2;
        }
        cout << "\n";
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