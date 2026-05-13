#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; i ++) {
            cin >> a[i];
        }

        string cur = "";
        for (int i = 0; i < n; i ++) {
            string c1 = cur + a[i];
            string c2 = a[i] + cur;
            cur = min(c1, c2);
        }
        cout << cur << endl;
    }
}