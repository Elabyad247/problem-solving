//  A. Array


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
    vi pos, neg, zero;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > 0) {
            pos.push_back(x);
        } else if (x < 0) {
            neg.push_back(x);
        } else {
            zero.push_back(x);
        }
    }

    if (pos.empty()) {
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }

    if (neg.size() % 2 == 0) {
        zero.push_back(neg.back());
        neg.pop_back();
    }

    cout << neg.size() << " ";
    for (int i = 0; i < neg.size(); i++) {
        cout << neg[i] << " ";
    }

    cout << "\n" << pos.size() << " ";
    for (int i = 0; i < pos.size(); i++) {
        cout << pos[i] << " ";
    }

    cout << "\n" << zero.size() << " ";
    for (int i = 0; i < zero.size(); i++){
        cout << zero[i] << " ";
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