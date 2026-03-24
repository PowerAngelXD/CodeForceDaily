#include <bits/stdc++.h>

using namespace std;

int calc(int num) {
    string str = to_string(num);
    int result = 0;
    for (auto ch: str) {
        result += ch - '0';
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t --) {
        int x;
        cin >> x;
        if (x == 1)
            cout << 0 << endl;
        else {
            int count = 0;
            for (int y = x + 1; y < x + 91; y ++) {
                int d = calc(y);
                if (y - d == x) {
                    count ++;
                }
            }
            cout << count << endl;
        }
    }
}