#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool a = (s.find("2025") != string::npos);
        bool b = (s.find("2026") != string::npos);

        if (b || !a) cout << 0 << endl;
        else cout << 1 << endl;
    }
}
