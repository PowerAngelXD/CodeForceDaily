#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n; string s;
        cin >> n >> s;
        int c = 0;
        for (char ch : s) {
            c += (ch == '1');
        }

        int mx = c;
        for (int i = 1; i + 1 < n; ++i) {
            if (s[i] == '0' && s[i - 1] == '1' && s[i + 1] == '1') {
                mx ++;
            }
        }

        int mn = 0;
        int i = 0;
        while (i < n) {
            int l = i;
            int r = i;

            while (r + 1 < n && !(s[r] == '0' && s[r + 1] == '0')) {
                r ++;
            }

            int first1 = -1, last1 = -1;
            for (int j = l; j <= r; j ++) {
                if (s[j] == '1') {
                    if (first1 == -1) first1 = j;
                    last1 = j;
                }
            }

            if (first1 != -1) {
                int len = last1 - first1 + 1;
                mn += len / 2 + 1;
            }

            i = r + 1;
        }

        cout << mn << ' ' << mx << '\n';
    }
}