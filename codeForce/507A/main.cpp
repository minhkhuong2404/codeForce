#include <bits/stdc++.h>
using namespace std;

int n,k,ans=0,i;
pair<int,int>a[105];
int main()
{
	cin>>n>>k;
	for(i=0;i<n;++i)
	{ cin>>a[i].first; a[i].second=i; }
	sort(a,a+n);
	for(i=0;i<n;++i)
		if(ans+a[i].first<=k)
			ans+=a[i].first;
		else
			break;
	cout<<i<<endl;
	for(int j=0;j<i;++j)
		cout<<a[j].second+1<<' ';
}
/*

5 1
5 3 4 2 2
 */