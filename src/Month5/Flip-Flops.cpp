#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        long long n, c, k;
        cin >> n >> c >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i ++) cin >> a[i];

        sort(a.begin(), a.end());

        for (int i = 0; i < n; i ++) {
            if (a[i] > c) break;

            auto g = c - a[i];
            auto x = min(k, g);
            k -= x;
            c += a[i] + x;
        }

        cout << c << endl;
    }
}