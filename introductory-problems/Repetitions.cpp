#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    // int n = s.size();
    
    int longestSequence = 1;
    int currentSequence = 1;

    for(int i = 1; s[i]; i ++){
        if(s[i-1] != s[i]){
            longestSequence = max(longestSequence, currentSequence);
            currentSequence = 1;
        }
        else{
            currentSequence ++;
        }
    }

    longestSequence = max(longestSequence, currentSequence);

    cout << longestSequence << nl;
    

    return 0;
}
