#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i ++) cin >> a[i];

        long long both = 0, r = 0, c = 0;
        for (int i = 1; i <= n; i ++) {
            if (a[i] <= h && a[i] <= l) {
                both ++;
            } else if (a[i] <= h) {
                r ++;
            } else if (a[i] <= l) {
                c ++;
            }
        }

        long long ans = 0;

        long long cross = min(r, c);
        ans += cross;
        r -= cross;
        c -= cross;

        long long b = min(both, r + c);
        ans += b;
        both -= b;

        ans += both / 2;

        cout << ans << '\n';

    }

    return 0;
}