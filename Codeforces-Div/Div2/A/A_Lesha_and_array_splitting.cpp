//  A. Lesha and array splitting


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
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i];
    }

    int l = -1;
    if (sum != 0) {
        cout << "YES\n1\n1 " << n;
        return;
    } else {
        for (int i = 0; i < n; ++i) {
            sum += v[i];
            if (sum != 0) {
                l = i+1;
                break;
            }
        }
    }

    if (l != -1) {
        cout << "YES\n2\n";
        cout << "1 " << l << "\n";
        cout << l+1 << " " << n;
    } else {
        cout << "NO";
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