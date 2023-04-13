//  R - Increasing


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
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    bool flag = true;
    for (int i = 0; i < n-1; i++) {
        if (arr[i] == arr[i+1]) {
            flag = false;
        }
    }

    if (flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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