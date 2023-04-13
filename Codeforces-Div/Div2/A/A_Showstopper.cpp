//  A. Showstopper


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
    vi a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    int maxa = *max_element(a.begin(), a.end());
    int maxb = *max_element(b.begin(), b.end());

    if (maxa == a[n-1] && maxb == b[n-1]) {
        cout << "Yes\n";
        return;
    }

    bool flag = true;
    for (int i = 0; i < n; ++i) {
        if ((a[i] > a[n-1] || b[i] > b[n-1]) && (b[i] > a[n-1] || a[i] > b[n-1])) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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