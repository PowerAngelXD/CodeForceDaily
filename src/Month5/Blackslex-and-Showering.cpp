#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i ++) {
            cin >> a[i];
        }

        long long sum = 0;
        for (int i = 0; i + 1 < n; i ++) {
            sum += llabs((long long)a[i] - a[i + 1]);
        }

        long long best = 0;
        best = max(best, llabs((long long)a[0] - a[1]));
        best = max(best, llabs((long long)a[n - 2] - a[n - 1]));

        for (int k = 1; k + 1 < n; k ++) {
            long long l = llabs((long long)a[k - 1] - a[k]);
            long long r = llabs((long long)a[k] - a[k + 1]);
            long long b = llabs((long long)a[k - 1] - a[k + 1]);
            best = max(best, l + r - b);
        }

        cout << (sum - best) << "\n";
    }
}
