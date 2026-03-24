#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T --) {
        int k;
        cin >> k;
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        if (a1 + a2 < b1 + b2 + k) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
