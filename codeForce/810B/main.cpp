#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n,f,x,y;
	cin>>n>>f;
	long long sum = 0;
	for (int i = 0; i < n;i++){
		cin>>x>>y;
		sum += min(x,y);
		a[i] = min(x*2,y)-min(x,y);
	}

	sort(a,a+n);
	for (int i = n; i >= n-f;i--){
		sum += a[i];
	}
	cout<<sum;
	return 0;
}
/*
4 1
4 2
6 3
3 5
5 6
 */