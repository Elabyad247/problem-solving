//  D. Don't Forget The Semicolon

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int count=0;
    int time = 0;

    for(int i = 1; i<=n ; ++i){
        time+=5*i;
        if(time>240-k)
            break;
        count++;
    }
    
    cout << count;

    return 0;
}
