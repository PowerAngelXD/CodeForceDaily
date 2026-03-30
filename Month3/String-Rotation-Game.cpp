#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int D = 0;
        for (int i = 0; i < n; i ++) {
            if (s[i] != s[(i + 1) % n]) {
                D ++;
            }
        }

        int ans = (D == n ? n : D + 1);
        cout << ans << endl;
    }
    return 0;
}