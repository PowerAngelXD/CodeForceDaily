#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        long long n;
        cin >> n;

        if (n == 1) cout << 1 << endl;
        else if (n == 2) cout << 9 << endl;
        else if (n == 3 || n == 4) cout << 4*pow(n, 2) - n - 4 << endl;
        else cout << 5*pow(n, 2) - 5 * n - 5 << endl;
    }
}