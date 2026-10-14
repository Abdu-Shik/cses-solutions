#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while(q --){
        int x, y;
        cin >> x >> y;

        if(x > y){
            ll squareValue = (ll)x * x;

            cout << (x & 1 ? squareValue - x + 1 - x + y : squareValue - y + 1) << nl;
        }
        else{
            ll squareValue = (ll)y * y;
            
            cout << (y & 1 ? squareValue - x + 1 : squareValue - y + 1 - y + x) << nl;
        }
    }

    return 0;
}
