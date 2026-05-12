#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        stack<char> stk;
        for (int i = 0; i < n; i ++) {
            if (!stk.empty() && stk.top() == s[i]) stk.pop();
            else stk.push(s[i]);
        }

        if (stk.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}