//  A. BowWow and the Timetable


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
    bool flag = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]=='1') {
            flag = true;
            break;
        }
    }
    if (flag) {
        if (s.size()%2==0) {
            cout << s.size()/2;
        } else {
            cout << (s.size()+1)/2;
        }
    } else {
        cout << "0";
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