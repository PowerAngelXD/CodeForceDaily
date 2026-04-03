#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main() {
    signed t;
    cin >> t;
    while (t --) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i ++) cin >> a[i];
        
        int b = 0;
        for (int i = 1; i <= n; i ++) b += a[i] / x;
        
        vector<int> r;
        for (int i = 1; i <= n; i ++) {
            int R = 0;
            R = a[i] + (b - a[i] / x) * y;
            r.push_back(R);
        }

        cout << *max_element(r.begin(), r.end()) << endl;
    }
}