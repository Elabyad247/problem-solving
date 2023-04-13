//  F. Ohhh Sh*t, Here We Go Again!!!

#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int strsize = s.size();
    set<char> st;
    for (int i = 0; i < strsize; ++i) {
        st.insert(s[i]);
    }
    int stsize = st.size();
    if (stsize%2 != 0) {
        cout << "IGNORE HIM!";
    } else {
        cout << "CHAT WITH HER!";
    }

    return 0;
}
