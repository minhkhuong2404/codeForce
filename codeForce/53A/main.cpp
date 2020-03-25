#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define oo 666666666

int main()
{
	ios::sync_with_stdio(0);
	string s,x,ats(101,'z');
	int n;
	cin>>s>>n;

	for(int i=0; i<n; i++)
	{
		cin>>x;
		if(x.find(s)==0)
		{
			ats=min(ats,x);
		}
	}

	cout<<(ats.size()>100 ? s : ats)<<"\n";
}