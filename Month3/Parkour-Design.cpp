#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long d = x - 2 * y;

        if (d < 0 || d % 3 != 0) {
            cout << "NO\n";
            continue;
        }

        long long k = d / 3;
        long long needC = max(0LL, -y);
        long long maxC = k / 2;

        if (maxC >= needC) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}