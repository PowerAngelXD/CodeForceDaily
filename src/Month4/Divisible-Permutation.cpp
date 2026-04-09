#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        vector<int> p(n);
        int l = 1, r = n;
        int i = n - 1;
        for (; i > 0;) {
            p[i] = l;
            i --;
            p[i] = r;
            i --;

            l ++;
            r --;
        }
        
        if (l == r) {
            p[i] = l;
        }

        for (int i = 0; i < n; i ++) {
            cout << p[i] << " \n"[i == n - 1];
        }
    }
}