#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, l = 0, count = 0;
	cin >> n >> k;
	int a[n];
	for (int i = 1; i<=n; i++) {
		cin >> a[i];
		if (i == k) {
			l = a[i];
		}
	}
	for (int j = 1; j <= n; j++) {
		if (l > 0) {
			if (a[j] >= l) {
				count += 1;
			}
		}
		else if ( l == 0){
			if (a[j] > 0){
				count+= 1;
			}
		}
	}
	cout <<count;
	return 0;
}