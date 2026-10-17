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


    ll minDifference = 1e11;
    for(int combination = 0; combination < (1 << n); combination ++){
        ll firstGroup = 0, secondGroup = 0;
        for(int j = 0; j < n; j ++){
            bool toFirstGroup = (combination >> j) & 1;

            if(toFirstGroup) firstGroup += arr[j];
            else secondGroup += arr[j];
        }

        minDifference = min(minDifference, abs((ll)firstGroup - secondGroup));
    }

    cout << minDifference << nl;

    return 0;
}
