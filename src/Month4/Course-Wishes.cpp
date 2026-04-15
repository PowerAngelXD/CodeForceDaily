#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(k + 1), b(n + 1);
        for (int i = 1; i <= k; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        vector<vector<int>> levels(k + 2);
        vector<int> cnt(k + 2, 0);

        for (int i = 1; i <= n; i++) {
            levels[b[i]].push_back(i);
            if (b[i] <= k) cnt[b[i]]++;
        }

        vector<int> ans;
        ans.reserve(1000);

        bool fail = false;

        while (true) {
            int x = 0;
            for (int lv = k; lv >= 1; lv--) {
                if (!levels[lv].empty()) {
                    x = lv;
                    break;
                }
            }

            if (x == 0) break;

            if (x < k && cnt[x + 1] + 1 > a[x + 1]) {
                fail = true;
                break;
            }

            int id = levels[x].back();
            levels[x].pop_back();

            ans.push_back(id);

            cnt[x]--;
            if (x + 1 <= k) cnt[x + 1]++;

            levels[x + 1].push_back(id);

            if ((int)ans.size() > 1000) {
                fail = true;
                break;
            }
        }

        if (fail) {
            cout << -1 << '\n';
            continue;
        }

        cout << ans.size() << '\n';
        for (int i = 0; i < (int)ans.size(); i++) {
            if (i) cout << ' ';
            cout << ans[i];
        }
        cout << '\n';
    }

    return 0;
}