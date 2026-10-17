#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    auto buildGrayCode = [](auto&& self, int n) -> vector<string>{
        if(n == 1) return {"0", "1"};

        vector<string> temp = self(self, n-1);

        vector<string> arr;
        for(int i = 0; i < (int)temp.size(); i ++){
            arr.push_back('0' + temp[i]);
        }
        for(int i = temp.size() - 1; i >= 0 ; i --){
            arr.push_back('1' + temp[i]);
        }

        // for(int i = 0; i < (int)arr.size(); i ++){
        //     cout << arr[i] << ' ';
        // }cout << nl;
        
        return arr;
    };

    int n;
    cin >> n;
    
    vector<string> arr = buildGrayCode(buildGrayCode, n);

    for(int i = 0; i < (int)arr.size(); i ++){
        cout << arr[i] << nl;
    }

    return 0;
}
