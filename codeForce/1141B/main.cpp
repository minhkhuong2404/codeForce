#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 10;
int a[MAXN], n, cnt, ans;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < 2 * n; i++) {
		if (a[i % n] == 1) {
			cnt++;
		}
		else
			cnt = 0;
		ans = max(ans, cnt);
	}
	cout << ans;
}