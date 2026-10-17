#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';

void towerOfHanoi(int n, int a , int b, int c){
    if(n == 1){
        cout << a << ' ' << c << nl;
        return;
    }
    towerOfHanoi(n-1, a, c ,b);
    cout << a << ' ' << c << nl;
    towerOfHanoi(n-1, b, a, c);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    cout << (1 << n) - 1 << nl;
    towerOfHanoi(n, 1, 2, 3);

    return 0;
}
