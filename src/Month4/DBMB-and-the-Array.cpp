#include <bits/stdc++.h>

using namespace std;

int sum(vector<int>& a) {
    int result = 0;
    for (auto& n: a) {
        result += n;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n, s, x;
        cin >> n >> s >> x;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i ++) cin >> a[i];

        int cur = sum(a);
        if (cur <= s && (s - cur) % x == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}