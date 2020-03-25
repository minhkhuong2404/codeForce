#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector <int> f (k);
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		f[t-1]++;
	}
	int ans = 0;
	for (int t : f) {
		if (t&1) ans++;
//		cout<<ans<<endl;
	}
	cout << n - (ans/2) << endl;
}