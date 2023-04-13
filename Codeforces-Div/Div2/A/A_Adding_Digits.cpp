//  A. Adding Digits


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
    long long a, b, n, res = 0;
    bool flag = false;
    cin >> a >> b >> n;
    for(int i = 0; i < 10 ;i++) {
        res = a*10+i;
        if(res%b == 0) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << res;
        for (int i = 0; i < n-1 ; ++i) {
            cout << 0;
        }
    } else {
        cout << -1;
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