#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];
	int f[1001]={0};

	for(int i=0; i<n;i++)
	{
		cin>>a[i], f[a[i]]++;
		if(f[a[i]] > (n+1)/2)
			return cout<<"NO",0;
	}
	cout<<"YES";

	return 0;
}