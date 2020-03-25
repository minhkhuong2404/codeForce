#include <bits/stdc++.h>
using namespace std;

int n,m,x,y,g[101][101],a[101];

int main () {
	cin >> n >> m;
	for (int i = 1 ; i <= n ; i++) cin >> a[i];
	for (int i = 1 ; i <= m ; i++) {
		cin >> x >> y;
		g[x][y] = 1;
		g[y][x] = 1;
	}
	int ans = 100000000;
	for (int i = 1 ; i <= n ; i++) {
		for (int j = i+1 ; j <= n ; j++) {
			for (int k = j+1 ; k <= n ; k++) {
				if (g[i][j] && g[j][k] && g[i][k]) {
					ans = min (ans, a[i]+a[j]+a[k]);
				}
			}
		}
	}
	if (ans == 100000000) cout << "-1\n";
	else cout << ans << endl;
	return 0;
}