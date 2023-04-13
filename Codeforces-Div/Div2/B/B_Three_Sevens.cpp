//  B. Three Sevens


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

bool visited[500005] = {false};
void solve() {
    int m;
    cin >> m;
    vector<vector<int>> v(m);
    vi res;
    for (int i = 0; i < m; ++i) {
        int n;
        cin >> n;
        v[i] = vector<int>(n);
        for (int j = 0; j < n; ++j) {
            int a;
            cin >> a;
            v[i][j] = a;
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < v[i].size(); j++) {
            if (!visited[v[i][j]]) {
                res.push_back(v[i][j]);
                visited[v[i][j]] = true;
                break;
            } else {
                visited[v[i][j]] = true;
            }
        }
    }

    if (res.size() == m) {
        for (int i = 0; i < m; ++i) {
            cout << res[i] << " ";
        }
        cout << "\n";
    } else {
        cout << "-1\n";
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