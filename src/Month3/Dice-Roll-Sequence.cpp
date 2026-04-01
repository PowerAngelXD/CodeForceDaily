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
        
        int count = 0;
        for (int i = 1; i < n; i ++) {
            if (a[i] + a[i - 1] == 7 || a[i] == a[i - 1]) {
                count ++;
                a[i] = 0;
            }
        }
        cout << count << endl;
    }
}