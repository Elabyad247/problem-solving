//  E. Little Elephant and Rozdil


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
    int arr[n];
    for (int i = 0; i < n ; i++) {
        cin >> arr[i];
    }
    int minm = arr[0];
    int temp = 0;
    for (int i=1; i < n;i++){
        if(arr[i]<minm) {
            minm = arr[i];
            temp = i;
        }
    }
    for(int i=0; i < n ;i++) {
        if(i==temp)
            continue;
        if(arr[i]==minm) {
            cout << "Still Rozdil";
            return;
        }
    }
    cout << temp+1 << endl;
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