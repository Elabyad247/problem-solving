#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    if ((x==4 || x==6 || x==9 || x==11) && (y==4 || y==6 || y==9 || y==11))
        cout << "Yes";
    else if ((x==4 || x==6 || x==9 || x==11) || (y==4 || y==6 || y==9 || y==11))
        cout << "No";
    else if (x==2 || y==2)
        cout << "No";
    else
        cout << "Yes";
}
