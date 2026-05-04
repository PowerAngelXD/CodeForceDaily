#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        long long n, m, d;
        cin >> n >> m >> d;

        long long H = d / m + 1; 
        long long ans = (n + H - 1) / H;

        cout << ans << '\n';
    }
}
