#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n-1; i++) {
        if (s[i] == s[i+1]) {
            count++;
        }
    }
    cout << count;

    return 0;
}

/* second answer

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    char oldc, newc;
    cin >> oldc;
    for (int i = 0; i < n-1; i++) {
        cin >> newc;
        if (oldc == newc){
            count++;
        }
        oldc = newc;
    }
    cout << count;

    return 0;
}
 */