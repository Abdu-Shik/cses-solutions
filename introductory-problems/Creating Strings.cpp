#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr char nl = '\n';

void permutations(string s, int ind, int n, set<string>& answer){
    if(ind == n){
        answer.insert(s);
    }

    for(int i = ind; i < n; i ++){
        swap(s[ind], s[i]);

        permutations(s, ind + 1, n, answer);

        swap(s[ind], s[i]);
    }
}

set<string> createStrings(string s){
    int n = s.size();
    set<string> answer;

    permutations(s, 0, n, answer);
    
    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    set<string> answer = createStrings(s);

    cout << answer.size() << nl;
    for(auto str : answer){
        cout << str << nl;
    }

    return 0;
}
