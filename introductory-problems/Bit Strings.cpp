#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';

const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    auto powerOf2 = [](int power) -> int{
        int answer = 1;
        for(int i = 0; i < power; i ++){
            answer = (answer * 2) % MOD;
        }

        return answer;
    };

    int n;
    cin >> n;
    
    cout << powerOf2(n) << nl;

    return 0;
}
