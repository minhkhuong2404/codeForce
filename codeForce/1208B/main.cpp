#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	set<int> has;
	int r = n;
	for (int i = n; i >= 1; --i) {
		if (has.count(a[i])) break;
		has.insert(a[i]);
		r = i;
	}
	int ans = n;
	cout<<r<<endl;
	for (int l = 1; l <= n; ++l) {
		ans = min(ans, r - l);
		while (r <= n && has.count(a[l])) {
			has.erase(a[r++]);
			cout<<a[r++]<<endl;
		}
		if (has.count(a[l])) break;
		has.insert(a[l]);
	}
	cout << ans << endl;
}