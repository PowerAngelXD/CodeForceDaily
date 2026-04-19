#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        map<int, int> count;

        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < n; j ++) {
                int a;
                cin >> a;
                count[a] ++;
            }
        }
        bool flag = false;
        for (int i = 1; i <= n * n; i ++) {
            if (count[i] > n * (n - 1)) flag = true;
        }

        if (flag) cout << "NO\n";
        else cout << "YES\n";
    }
}