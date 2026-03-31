#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t --)  {
		int n;
		cin >> n;

		int p[n + 5], idx = 1;

		for(int i = 1; i <= n; i ++) {
			cin >> p[i];
		}

		while(idx <= n && p[idx] == n - idx + 1) idx ++;
		int id = -1;

		for(int i = idx; i <= n; i ++) {
			if( p[i] == n - idx + 1) id = i;
		}

		for(int i = 1; i < idx; i ++ ) cout << p[i] << ' ';

		if(id != -1) {
			for( int i = id; i >= idx; i --) cout << p[i] << ' ';
			for( int i = id + 1; i <= n; i ++) cout << p[i] << ' ';
		}
		cout << '\n';
	}
}