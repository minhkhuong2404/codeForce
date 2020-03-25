#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t,k,count=0;
	cin>>t>>k;
	while(t--)
	{
		int b;
		cin>>b;
		set<int>s;
		// alerted
		while(b>0)
		{
			if(b%10<=k)
				s.insert(b%10);
			b/=10;
		}
		if(s.size()==k+1)
			count++;
	}
	cout<<count;
}