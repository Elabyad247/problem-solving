//  D. Gardener and the Capybaras (easy version)


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
    string s;
    cin >> s;
    for(int i = 1 ; i < s.size()-1 ; i++)
    {
        if (s[i] == 'a') {  // b smallest
            cout << s.substr(0,i) << " " << "a" << " " << s.substr(i+1) << "\n";
            return;
        }
    }

    // b largest
    cout << s[0] << " " << s.substr(1,s.size()-2) << " "<< s[s.size()-1] << "\n";
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