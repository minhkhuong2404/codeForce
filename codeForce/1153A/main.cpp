#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, t,  num = 0;
	cin >> n >> t;
	int s, d, ans = INT_MAX;
	for (int i = 1; i<=n; i++) {
		cin >> s >> d;
		while (s<t) s += d;
		if ( s-t  < ans) {
			ans = s-t;
			num = i;
		}
	}
	cout << num;
	return 0;
}
/*
3 100000
99999 100000
99999 100000
1 99999
 */