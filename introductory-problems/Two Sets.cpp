#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    
    ll totalSum = n * (n+1) / 2;
    if(totalSum % 2) {
        cout << "NO" << nl;
        return 0;
    }

    ll targetSum = totalSum / 2;

    cout << "YES" << nl;
    set<int> a, b;
    for(int i = n; i >= 1; i --){
        if(i <= targetSum){
            a.insert(i);
            targetSum -= i;
        }
        else{
            b.insert(i);
        }
    }
    cout << a.size() << nl;
    for(auto i : a){
        cout << i << ' ';
    }
    cout << nl;
    cout << b.size() << nl;
    for(auto i : b) {
        cout << i << ' ';
    }
    cout << nl;
    

    return 0;
}
