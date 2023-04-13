#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int minm;
    if (a < b && a < c) {
        minm = a;
    } else if (b < a && b < c)  {
        minm = b;
    } else {
        minm = c;
    }
    cout << a+b+c-minm;
}
