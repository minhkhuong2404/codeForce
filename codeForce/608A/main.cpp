#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,f,p;
	cin>>n>>m;
	while(n--)
	{
		cin>>f>>p;
		m=max(f+p,m);
	}
	cout<<m;
	return 0;
}