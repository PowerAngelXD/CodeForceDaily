#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n), a(n);
        for (int i = 0; i < n; ++i) cin >> p[i];
        for (int i = 0; i < n; ++i) cin >> a[i];

        vector<int> b;
        b.reserve(n);
        for (int x : a) {
            if (b.empty() || b.back() != x) b.push_back(x);
        }

        int j = 0;
        for (int x : p) {
            if (j < (int)b.size() && x == b[j]) ++j;
        }

        cout << (j == (int)b.size() ? "YES" : "NO") << '\n';
    }

    return 0;
}