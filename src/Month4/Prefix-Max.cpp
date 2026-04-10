#include <bits/stdc++.h>

using namespace std;

int get_v(std::vector<int> a) {
    int result = 0;
    for (int i = 0; i < a.size(); i ++) {
        int mx = a[i];
        for (int j = 0; j <= i; j ++) {
            if (a[j] > mx) mx = a[j];
        }
        result += mx;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i ++) cin >> a[i];

        int ans = get_v(a);

        for (int i = 0; i < n; i ++) {
            for (int j = i + 1; j < n; j ++) {
                int tmp = a[i], ri = 0, rj = 0;
                a[i] = a[j];
                a[j] = tmp;
                ans = max(ans, get_v(a));
                a[i] = ri; a[j] = rj;
            }
        }
        cout << ans << endl;
    }
}