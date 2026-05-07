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

        int M = *max_element(a.begin(), a.end());
        int c = 0;
        for (auto i: a) {
            if (i == M) c ++;
        }

        cout << c << endl;
    }
}