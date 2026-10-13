#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int arr[n];

    ll sum = 0;
    for(int i = 0; i < n-1; i ++){
        cin >> arr[i];

        sum += arr[i];
    }

    ll maxPossibleSum = (ll)n * (n+1) / 2;

    cout << maxPossibleSum - sum;

    // cout << maxPossibleSum << endl;

    return 0;
}
