#include <bits/stdc++.h>

using namespace std;

int s(long long white, long long dark, bool sw) {
    long long need = 1;
    int lay = 0;
    while (true) {
        bool use_white = (lay % 2 == 0) ? sw : !sw;
        if (use_white) {
            if (white < need) break;
            white -= need;
        } else {
            if (dark < need) break;
            dark -= need;
        }
        lay ++;
        need <<= 1;
    }
    return lay;
}

int main() {
    int t;
    cin >> t;
    while (t --) {
        long long a, b;
        cin >> a >> b;

        int ans = max(s(a, b, true), s(a, b, false));
        cout << ans << '\n';
    }
}
