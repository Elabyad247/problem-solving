//  B. Sort the Array


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
    vll v(n), sv(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sv[i] = v[i];
    }
    sort(sv.begin(), sv.end());
    bool flag = false;
    for (int i = 0; i < n; ++i) {
        if (v[i] != sv[i]) {
            flag = true;
            break;
        }
    }
    if (!flag) {
        cout << "yes\n 1 1";
    } else {
        flag = false;
        int l = 0;
        for (int i = 0; i < n-1; ++i) {
            if (v[i]<v[i+1]) {
                l++;
            } else {
                break;
            }
        }
        int r = l;
        for (int i = l; i < n-1; ++i) {
            if (v[i]>v[i+1]) {
                r++;
            } else {
                break;
            }
        }
        reverse(v.begin()+l, v.begin() + r + 1);
        for (int i = 0; i < n; ++i) {
            if (v[i] != sv[i]) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "yes\n";
            cout << l+1 << " " << r+1;
        } else {
            cout << "no";
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