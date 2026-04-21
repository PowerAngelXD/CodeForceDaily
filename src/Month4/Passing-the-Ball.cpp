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
        vector<int> nxt(n);
        vector<bool> visited(n);
        int result = 0;

        nxt[0] = 1;
        for (int i = 0; i < n; i ++) {
            if (i != 0 && i != n - 1) {
                if (s[i] == 'L') {
                    nxt[i] = i - 1;
                }
                else nxt[i] = i + 1;
            }
            else {
                if (i == 0) nxt[i] = 1;
                else if (i == n - 1) nxt[i] = n - 2;
            }
        }
        int cur = 0;
        visited[cur] = true;
        for (int i = 0; i < n; i ++) {
            cur = nxt[cur];
            visited[cur] = true;
        }

        for (auto i: visited) {
            if (i) result ++;
        }

        cout << result << endl;
    }
}