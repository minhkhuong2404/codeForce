#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[101], b[101];
	int n,m, *n1, *m1;
	cin>>n;
	for (int i =0 ;i < n; i++){
		cin>>a[i];
	}
	cin>>m;
	for (int i =0 ;i < m; i++){
		cin>>b[i];
	}
	n1 = max_element(a,a+n);
	m1 = max_element(b,b+m);
	cout<<*n1<<" "<<*m1;
	return 0;
}