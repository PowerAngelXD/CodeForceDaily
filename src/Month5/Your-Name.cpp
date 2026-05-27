#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        string s, t;
        cin >> n >> s >> t;

        map<char, int> counts;
        for (int i = 0; i < n; i ++) {
            if (counts.find(s[i]) == counts.end()) {
                counts[s[i]] = 1;
            }
            else if (counts.find(s[i]) != counts.end()) counts[s[i]] ++;
        }

        map<char, int> matches;
        for (int i = 0; i < n; i ++) {
            if (matches.find(t[i]) == matches.end()) {
                matches[t[i]] = 1;
            }
            else if (matches.find(t[i]) != matches.end()) matches[t[i]] ++;
        }

        bool success = true;
        for (int i = 0; i < n; i ++) {
            if (matches.find(t[i]) == matches.end()) {
                success = false;
                break;
            }

            if (matches[t[i]] > counts[t[i]]) {
                success = false; 
                break;
            }
        }

        if (success) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}