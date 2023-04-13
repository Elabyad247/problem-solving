//  A. Likes


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
    vi a, b, temp;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x>0) {
            a.push_back(x);
        } else {
            b.push_back(x);
        }
        temp.push_back(x);

    }
    int inc = 0;
    for (int i = 0; i < a.size(); ++i) {
        inc++;
        cout << inc << " ";
    }
    for (int i = 0; i < b.size(); ++i) {
        inc--;
        cout << inc << " ";
    }
    cout << "\n";

    sort(a.begin(), a.end());
    inc = 0;
    for (int i = 0; i < a.size(); ++i) {
        auto it = find(b.begin(), b.end(), -a[i]);
        if (it != b.end()) {
            inc++;
        }
    }
    for (int i = 0; i < inc; ++i) {
        cout << "1 0 ";
    }
    int count = 0;
    for (int i = 0; i < a.size()-inc; ++i) {
        count++;
        cout << count << " ";
    }
    cout << "\n";

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