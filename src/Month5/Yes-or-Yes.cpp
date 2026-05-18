#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        string s;
        cin >> s;

        int y = 0;
        for (int i = 0; i < s.length(); i ++) {
            if (s[i] == 'Y') y ++;
        }

        if (y <= 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}