#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((i%2!=0&&j%2==0)||(i%2==0&&j%2!=0))
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
