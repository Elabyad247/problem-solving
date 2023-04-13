//  B. Count the Number of Pairs


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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    // string alpha = "abcdefghijklmnopqrstuvwxyz";
    vector<int> vc(255,0);
    for (int i = 0; i < n; ++i) {
        int x = s[i] - 'A';
        vc[x]++;
    }

    int pairs = 0;
    int i = 0, j = 32;
    while (i < 26) {
        int minm = min(vc[i], vc[j]);
        pairs += minm;
        vc[i] -= minm;
        vc[j] -= minm;
        i++;
        j++;
    }

    for (i = 0; i < 65; ++i) {
        if (vc[i]>=2) {
            int xp = vc[i]/2;
            if (xp > k) {
                pairs += k;
                break;
            } else {
                pairs += xp;
                k -= xp;
            }
        }
    }

    cout << pairs << "\n";

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