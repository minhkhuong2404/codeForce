#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int diff=a[n-1]-a[0];
	if(!(diff&1))
		diff/=2;
	for(int i=0;i<n-1;i++)
	{
		if(a[i+1]-a[i]==diff||a[i+1]==a[i]||a[i+1]-a[i]==2*diff)
			continue;
		else
		{
			cout<<"-1";
			return 0;
		}
	}
	cout<<diff;
	return 0;

}