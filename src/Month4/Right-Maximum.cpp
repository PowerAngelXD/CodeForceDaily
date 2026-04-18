#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i ++) cin >> a[i];

        vector<int> pos(n);
        int mx = a[0];
        pos[0] = 0;
        for (int i = 1; i < n; i ++) {
            if (a[i] >= mx) {
                mx = a[i];
                pos[i] = i;
            } 
            else {
                pos[i] = pos[i - 1];
            }
        }

        int r = n;
        int ans = 0;
        while (r > 0) {
            ans ++;
            r = pos[r - 1];
        }
        cout << ans << endl;
    }
}