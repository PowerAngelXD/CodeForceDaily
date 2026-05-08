#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i ++) cin >> a[i];

        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        int best = 0;
        int cur = 0;
        for (size_t i = 0; i < a.size(); i ++) {
            if (i == 0 || a[i] != a[i - 1] + 1) cur = 1;
            else cur ++;
            best = max(best, cur);
        }

        cout << best << endl;
    }
    return 0;
}
