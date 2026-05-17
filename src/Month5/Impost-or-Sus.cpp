#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        string r;
        cin >> r;

        int n = (int)r.size();
        long long ans = 0;

        if (r[0] == 'u') {
            ans ++;
            r[0] = 's';
        }
        if (r[n - 1] == 'u') {
            ans ++;
            r[n - 1] = 's';
        }

        for (int i = 0; i < n; ) {
            if (r[i] != 'u') {
                i ++;
                continue;
            }

            int j = i;
            while (j < n && r[j] == 'u') j ++;
            int len = j - i;
            ans += len / 2;
            i = j;
        }

        cout << ans << endl;
    }
}