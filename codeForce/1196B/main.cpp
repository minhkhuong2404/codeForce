#include <bits/stdc++.h>
using namespace std;

int main()
{
	int q,k,n;
	cin>>q;
	for(int i = 0; i < q;i++){
		cin>>n>>k;
		int a[n];
		int count = 0;
		for (int j = 0; j < n ;j++){
			cin>>a[j];
			count += a[j] % 2;
		}
		if (count < k || count % 2 != k % 2) {
			cout << "NO" << endl;
			continue;
		}
		cout<<"YES"<<endl;
		for (int j = 0; j < n; ++j) {
			if (k == 1) break;
			if (a[j] % 2 == 1) {
				cout << j + 1 << " ";
				--k;
			}
		}
		cout << n << endl;
	}
	return 0;
}