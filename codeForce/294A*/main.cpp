#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,x,y,num[101];
	cin>>n;
	for ( int i = 1; i <= n;i++){
		cin>>num[i];
	}
	cin>>m;
	for ( int i = 1; i <= m;i++){
		cin>>x>>y;
		num[x-1] += y - 1;
		num[x+1] += num[x] - y;
		num[x] = 0;
	}

	for ( int k = 1; k <= n; k++){
		cout<<num[k]<<endl;
	}
	return 0;
}