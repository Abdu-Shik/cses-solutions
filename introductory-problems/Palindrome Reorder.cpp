#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    int alpha[26]{};
    for(int i = 0; s[i]; i ++){
        int alphaOrder = s[i] - 'A';
        alpha[alphaOrder] ++;
    }

    int odds = 0, oddIndex = -1;
    for(int i = 0; i < 26; i ++){
        if(alpha[i] & 1){
            odds ++;
            oddIndex = i;
        }
    }

    // for(int i = 0; i < 26; i ++){
    //     cout << alpha[i] << ' ';
    // }cout << nl;

    if(odds > 1){
        cout << "NO SOLUTION" << nl;
        return 0;
    }

    for(int i = 0; i < 26; i ++){
        for(int j = 0; j < alpha[i] / 2; j ++){
            cout << char(i + 'A');
        }
    }

    if(oddIndex != -1){
        cout << char(oddIndex + 'A');
    }

    for(int i = 25; i >= 0; i --){
        for(int j = 0; j < alpha[i] / 2; j ++){
            cout << char(i + 'A');
        }
    }
    

    return 0;
}
