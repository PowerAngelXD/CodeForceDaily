#include <bits/stdc++.h>

using namespace std;

int main() {
    int g,c,t;
    cin >> g >> c >> t;
    int mx = max(max(g, c), t);
    int mn = min(min(g, c), t);
    if (mx - mn >= 10) cout << "check again" << endl;
    else {
        int mid = g + c + t - mx - mn;
        cout << "final " << mid << endl;
    }
}
