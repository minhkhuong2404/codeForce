#include <iostream>
using namespace std;

const int MAXN = 110;
string s[MAXN];
string mx;
int main () {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		cin >> s[i];
	mx = s[0];
	for (int i= 0;i < n; ++i)
		for (int j = 0; j < m; ++j)
			mx[j] = max(mx[j], s[i][j]);
	int cnt = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (s[i][j] == mx[j]) {
				++cnt;
				break;
			}
	cout << cnt;
	return 0;
}