#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    ll noOfFives = 0;
    
    for(int i = 5; i <= n; i += 5){
        int copy = i;
        while(copy % 5 == 0){
            noOfFives ++;
            copy /= 5;
        }
    }

    cout << noOfFives << nl;

    return 0;
}
