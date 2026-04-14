#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        string s;
        cin >> n >> s;
        int pp = 0;
        for (auto c: s) { 
            if (c == '1') pp ++;
        }
        int p = pp % 2;
        if (n % 2 != 0 && p == 1) cout << -1 << endl;
        else {
            int k;
            if (p == 1) k = 1;
            else k = p;
            vector<int> ans, x;
            for (int i = 0; i < n; i ++) {
                x.push_back((s[i] - '0') ^ k);
                if (x[i] == 1) ans.push_back(i + 1);
            }
            cout << ans.size() << '\n';
            for (int i = 0; i < (int)ans.size(); i++) {
                cout << ans[i] << " \n"[i == (int)ans.size() - 1];
            }
            if (ans.empty()) cout << '\n';
        }
    }
}