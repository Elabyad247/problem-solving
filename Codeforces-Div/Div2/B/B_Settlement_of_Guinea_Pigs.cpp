//  B. Settlement of Guinea Pigs


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
    vi v;
    int numofpigs=0,numofdocs=0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x==1)
            numofpigs++;
        else
            numofdocs++;
        v.push_back(x);
    }
    if (numofdocs==0) {
        cout << numofpigs << "\n";
        return;
    }
    if (numofpigs==0) {
        cout << 0 << "\n";
        return;
    }

    int box = 0, count = 0;
    int res = 0;
    for (int i = 1; i < n; ++i) {
        if (v[i]==1) {
            count++;
        } else {
            box = count/2;
            count %= 2;
        }
        res = max(box+count, res);
    }

    cout << res+1 << "\n";
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