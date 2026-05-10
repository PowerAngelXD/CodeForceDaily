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

        vector<int> ans(n);
        for (int i = 0; i < n; i ++) {
            int less = 0, greater = 0;
            for (int j = i + 1; j < n; j ++) {
                if (a[j] < a[i]) less ++;
                else if (a[j] > a[i]) greater ++;
            }
            ans[i] = max(less, greater);
        }

        for (int i = 0; i < n; i ++) {
            cout << ans[i] << " \n"[i == n - 1];
        }
    }
}