#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t --) {
        int n;
        cin >> n;
        ll common_gcd = 0;
        for (int i = 0; i < n; i++) {
            ll val;
            cin >> val;
            if (i == 0) common_gcd = val;
            else common_gcd = __gcd(common_gcd, val);
        }

        for (int p = 2; ; p++) {
            if (is_prime(p)) {
                if (common_gcd % p != 0) {
                    cout << p << endl;
                    break;
                }
            }
        }
    }
}
