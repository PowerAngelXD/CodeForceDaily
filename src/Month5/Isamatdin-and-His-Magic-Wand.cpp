#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i ++) cin >> a[i];

        bool o = false, e = false;
        for (auto i: a) {
            if (i % 2 == 1) o = true;
            else if (i % 2 == 0) e = true;
        }

        if (o && e) {
            sort(a.begin(), a.end());
            for (int i = 0; i < n; i ++) {
                cout << a[i] << " \n"[i == n - 1];
            }
        }
        else {
            for (int i = 0; i < n; i ++) {
                cout << a[i] << " \n"[i == n - 1];
            }
        }
    }
}