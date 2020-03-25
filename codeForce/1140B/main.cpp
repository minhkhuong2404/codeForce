#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	string s;
	cin>>t;
	while(t--){
		cin>>n>>s;
		int i = 0;
		for(; i<n ; i++)
		{
			if(s[i]=='>'||s[n-i-1]=='<')
				break;
		}
		std::cout << i << std::endl;
	}
	return 0;
}