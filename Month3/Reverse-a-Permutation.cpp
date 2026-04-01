#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t --)  {
		int n;
		cin >> n;

		int p[n + 5], l = 1;

		for(int i = 1; i <= n; i ++) {
			cin >> p[i];
		}

		while(l <= n && p[l] == n - l + 1) l ++;
		int r = -1;

		for(int i = l; i <= n; i ++) {
			if( p[i] == n - l + 1) r = i;
		}

		for(int i = 1; i < l; i ++ ) cout << p[i] << ' ';

		if(r != -1) {
			for( int i = r; i >= l; i --) cout << p[i] << ' ';
			for( int i = r + 1; i <= n; i ++) cout << p[i] << ' ';
		}
		cout << '\n';
	}
}