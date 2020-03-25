#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	int n;
	for (int i = 0; i < T;i++){
		n = 0;
		cin>>n;
		int a[n-1];
		for (int j = 0;j < n;j++){
			cin>>a[j];
		}
		sort(a,a+n,greater<int>());
		cout<<min(a[1]-1,n-2)<<endl;
	}
	return 0;
}