#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    long long startx,starty,endx,endy;
    cin >> startx >> starty >> endx >> endy;

    if (startx==endx && starty==endy) {
        cout << "0";
        return 0;
    }

    int flagx = 0, flagy = 0;
    if (startx<endx) {
        flagx = 1;
    } else if (startx>endx) {
        flagx = -1;
    }
    if (starty<endy) {
        flagy = 1;
    } else if (starty>endy) {
        flagy = -1;
    }

    int count = 0;
    for (int i = 0; i < t; ++i) {
        char d;
        cin >> d;
        if (startx!=endx || starty!=endy) {
            if (d == 'E' && flagx == 1 && startx!=endx) {
                startx++;
            } else if (d == 'W' && flagx == -1 && startx!=endx) {
                startx--;
            } else if (d=='N' && flagy==1 && starty!=endy) {
                starty++;
            } else if (d=='S' && flagy==-1 && starty!=endy) {
                starty--;
            }
            count++;
        } else {
            break;
        }
    }

    if (startx==endx && starty==endy) {
        cout << count;
    } else {
        cout << "-1";
    }

    return 0;
}
