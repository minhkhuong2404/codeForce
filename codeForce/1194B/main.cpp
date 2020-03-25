#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

int main() {
	int q;
	cin >> q;
	forn(_, q){
		int n, m;
		cin >> n >> m;
		vector<string> s(n);
		forn(i, n)
			cin >> s[i];
		vector<int> cntn(n), cntm(m);
		forn(i, n) forn(j, m){
			cntn[i] += (s[i][j] == '.');
			cntm[j] += (s[i][j] == '.');
		}
		int ans = n + m;
		forn(i, n) forn(j, m){
			ans = min(ans, cntn[i] + cntm[j] - (s[i][j] == '.'));
		}
		cout << ans << "\n";
	}
	return 0;
}