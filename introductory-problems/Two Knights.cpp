#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    for(int k = 1; k <= n; k ++){
        if(k == 1) cout << 0 << nl;
        else if(k == 2) cout << 6 << nl;
        else {
            ll square = k * k;
            ll allPossiblePositions = square * (square-1) / 2;

            int noOfAttackingPositions = (k-1) * (k-2) * 4;
            
            // cout << allPossiblePositions << " - " << noOfAttackingPositions << " = ";
            cout << allPossiblePositions - noOfAttackingPositions << nl;
        }
    }

    return 0;
}
