#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    
    ll answer = 0;
    int currentBase = arr[0];
    for(int i = 1; i < n; i ++){
        if(arr[i] > currentBase){
            currentBase = arr[i];
        }
        else {
            answer += (ll)currentBase - arr[i];
        }
    }

    cout << answer << nl;

    return 0;
}
