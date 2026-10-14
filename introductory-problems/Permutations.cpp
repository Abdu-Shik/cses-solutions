#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    if(n <= 3 && n != 1){
        cout << "NO SOLUTION";
        return 0;
    }

    for(int i = 2; i <= n; i += 2){
        cout << i << ' ';
    }
    for(int i = 1; i <= n; i += 2){
        cout << i << ' ';
    }
    

    return 0;
}
