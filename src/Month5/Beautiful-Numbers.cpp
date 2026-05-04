#include <bits/stdc++.h>

using namespace std;

long long F(long long x) {
    auto s = to_string(x);
    long long result = 0;
    for (auto c : s) {
        result += c - '0';
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t --) {
        long long x;
        cin >> x;

        long long sum = F(x);
        if (sum <= 9) {
            cout << 0 << '\n';
            continue;
        }

        int need = static_cast<int>(sum - 9);

        string s = to_string(x);
        vector<int> caps;
        caps.reserve(s.size());

        for (int i = 0; i < (int)s.size(); i ++) {
            int d = s[i] - '0';
            caps.push_back(i == 0 ? d - 1 : d);
        }

        sort(caps.rbegin(), caps.rend());

        int ans = 0;
        for (int cap : caps) {
            if (need <= 0) break;
            need -= cap;
            ans ++;
        }

        cout << ans << '\n';
    }
}
