#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,left,right;
	char x,y,s[10000];
	cin>> n>>m;
	cin>>s;
	while(m--)
	{
		cin>>left>>right>>x>>y;
		for( i = left-1; i < right;i++)
			if( s[i] == x)
				s[i] = y;
	}
	cout<<s;
	return 0;
}
