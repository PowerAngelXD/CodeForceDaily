#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;

        unordered_set<int> c;
        c.reserve(n * 2 + 10);
        for (int i = 0; i < n; i ++) {
            int x;
            cin >> x;
            c.insert(x);
        }

        int k = (int)c.size();
        while (true) {
            if (c.count(k)) {
                cout << k << endl;
                break;
            }
            c.insert(k);
            k ++;
        }
    }
}
