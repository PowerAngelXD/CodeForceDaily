#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --) {
        long long a, b, c, m;
        cin >> a >> b >> c >> m;

        long long na = m/a, nb = m/b, nc = m/c;
        long long nab = m/lcm(a,b), nbc = m/lcm(b,c), nac = m/lcm(a,c), nabc = m/lcm(lcm(a, b), c);
        long long wa = 6*na - 3*nab - 3*nac + 2*nabc, 
        wb = 6*nb - 3*nab - 3*nbc + 2*nabc, 
        wc = 6*nc - 3*nac - 3*nbc + 2*nabc;

        cout << wa << " " << wb << " " << wc << endl;
    }
}