#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i ++) cin >> a[i];
        map<int, int> pos;
        for (int i = 1; i <= n; i ++) {
            pos[a[i]] = i;
        }

        bool flag = false;
        for (int i = 1; i <= n - 1; i ++) {
            if (pos[i] % 2 == pos[i + 1] % 2) {
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "YES" << endl;
    }
}