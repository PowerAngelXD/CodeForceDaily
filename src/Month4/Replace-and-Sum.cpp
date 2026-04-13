#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i ++) cin >> a[i];
        for (int i = 0; i < n; i ++) cin >> b[i];

        vector<long long> F(n), P(n + 1, 0);

        F[n - 1] = max(a[n - 1], b[n - 1]);
        for (int i = n - 2; i >= 0; i --) {
            F[i] = max((long long)max(a[i], b[i]), F[i + 1]);
        }
        
        for (int i = 0; i < n; i ++) {
            P[i + 1] = P[i] + F[i];
        }
        
        for (int i = 0; i < q; i ++) {
            int l, r;
            cin >> l >> r;
            l --, r --;
            cout << P[r + 1] - P[l] << " \n"[i == q - 1];
        }
    }
}