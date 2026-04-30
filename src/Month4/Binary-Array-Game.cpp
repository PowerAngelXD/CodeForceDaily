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

        if (a[1] == 0 && a[n] == 0) {
            cout << "Bob" << endl;
        }
        else cout << "Alice" << endl;
    }
}