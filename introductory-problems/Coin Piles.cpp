#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while(q --) {
        int a, b;
        cin >> a >> b;

        if((a + b) % 3 != 0 || min(a, b) * 2 < max(a, b)){
            cout << "NO" << nl;
            continue;
        }
        
        cout << "YES" << nl;
    }

    return 0;
}
