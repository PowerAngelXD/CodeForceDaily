#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        string s;
        cin >> s;

        int n = (int)s.size();
        vector<int> suf13(n + 1, 0);
        for (int i = n - 1; i >= 0; i --) {
            suf13[i] = suf13[i + 1] + (s[i] == '1' || s[i] == '3');
        }

        int prefix2 = 0;
        int best = 0;
        for (int i = 0; i <= n; i ++) {
            best = max(best, prefix2 + suf13[i]);
            if (i == n) break;
            if (s[i] == '2') prefix2 ++;
        }

        cout << (n - best) << endl;
    }
}
