#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < n; i ++) {
            int tmp;
            cin >> tmp;
            if (tmp == 0) cnt0 ++;
            else if (tmp == 1) cnt1 ++;
        } 

        if (cnt0 == 0) cout << "NO" << endl;
        else if (cnt1 > 0) cout << "YES" << endl;
        else if (cnt0 == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}