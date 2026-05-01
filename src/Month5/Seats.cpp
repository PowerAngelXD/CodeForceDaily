#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        string s;
        cin >> n >> s;

        s = '1' + s + '1';
        int ans = 0;
        int L = 0;
        for (int i = 1; i <= n; i ++) {
            if (s[i] == '0') {
                if (s[i - 1] == '1') L = i;
                if (s[i + 1] == '1') {
                    int len = i - L + 1;
                    int c = (L == 1) + (i == n);
                    ans += (len + c) / 3;
                }
            } else {
                ans ++;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}