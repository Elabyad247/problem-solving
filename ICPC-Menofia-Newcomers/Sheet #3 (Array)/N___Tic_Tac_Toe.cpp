//  N - Tic-Tac-Toe


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

void ifsolve() {
    char c;
    cin >> c;
    cin.ignore();
    string l1, l2, l3;
    getline(cin, l1);
    getline(cin, l2);
    getline(cin, l3);

    // X + X +  = 208
    // O + O +  = 190

    if (c == 'X') {
        if ((l1[0] + l2[0] + l3[0] == 208) || (l1[1] + l2[1] + l3[1] == 208) || (l1[2]+l2[2]+l3[2] == 208) ||
            (l1[0] + l2[1] + l3[2] == 208) || (l1[2] + l2[1] + l3[0] == 208) || (l1[0] + l1[1] + l1[2] == 208) ||
            (l2[0] + l2[1] + l2[2] == 208) || (l3[0] + l3[1] + l3[2] == 208)) {
            cout << "Yes you can.";
        } else {
            cout << "No you can't.";
        }
    } else {
        if ((l1[0] + l2[0] + l3[0] == 190) || (l1[1] + l2[1] + l3[1] == 190) || (l1[2] + l2[2] + l3[2] == 190) ||
            (l1[0] + l2[1] + l3[2] == 190) || (l1[2] + l2[1] + l3[0] == 190) || (l1[0] + l1[1] + l1[2] == 190) ||
            (l2[0] + l2[1] + l2[2] == 190) || (l3[0] + l3[1] + l3[2] == 190)) {
            cout << "Yes you can.";
        } else {
            cout << "No you can't.";
        }
    }
}

void forsolve() {
    char c;
    cin >> c;
    cin.ignore();
    string chess[3];
    getline(cin, chess[0]);
    getline(cin, chess[1]);
    getline(cin, chess[2]);

    int count = 0;
    bool can_place = false;
    for (int i = 0; i < 3; ++i) {
        count = 0, can_place = false;
        for (int j = 0; j < 3; ++j) {
            if (chess[i][j] == c) {
                count++;
            } else if (chess[i][j] == ' ') {
                can_place = true;
            }
        }
        if (count == 2 && can_place) {
            cout << "Yes you can.";
            return;
        }
    }

    for (int j = 0; j < 3; ++j) {
        count = 0, can_place = false;
        for (int i = 0; i < 3; ++i) {
            if (chess[i][j] == c) {
                count++;
            } else if (chess[i][j] == ' ') {
                can_place = true;
            }
        }
        if (count == 2 && can_place) {
            cout << "Yes you can.";
            return;
        }
    }

    count = 0, can_place = false;
    for (int i = 0; i < 3; ++i) {
        if (chess[i][i] == c) {
            count++;
        } else if (chess[i][i] == ' ') {
            can_place = true;
        }
    }
    if (count == 2 && can_place) {
        cout << "Yes you can.";
        return;
    }

    count = 0, can_place = false;
    for (int i = 0; i < 3; ++i) {
        if (chess[i][2-i] == c) {
            count++;
        } else if (chess[i][2-i] == ' ') {
            can_place = true;
        }
    }
    if (count == 2 && can_place) {
        cout << "Yes you can.";
        return;
    }

    cout << "No you can't.";
}


void solve() {
    forsolve();
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