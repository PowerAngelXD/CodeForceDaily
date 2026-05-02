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

        bool flag = false;
        int prev = a[0];
        for (int i = 1; i < n; i ++) {
            if (prev > a[i]) {
                flag = true;
                break;
            }
            prev = a[i];
        }

        if (flag) {
            cout << 1 << endl;
        }
        else cout << n << endl;
    }
}