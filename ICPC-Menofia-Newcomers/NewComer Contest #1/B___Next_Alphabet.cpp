#include<iostream>
using namespace std;
int main() {

    char n;
    cin >> n;
    if (n == 'z')
        cout << 'a';
    else 
        cout << (char)((int)n+1);

    return 0;
}
