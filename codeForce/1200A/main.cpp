#include <bits/stdc++.h>
using namespace std;

int n,a[11];
string s;

int main()
{
	int i;
	cin>>n;
	cin>>s;
	for(auto c:s){
		if(c=='L'){
			for(i=1;i<=10;i++)
				if(a[i]==0){a[i]=1;break;}
		}
		else if(c=='R'){
			for(i=10;i>=1;i--)
				if(a[i]==0){a[i]=1;break;}
		}
		else{
			a[c-'0'+1]=0;
		}
	}
	for(i=1;i<=10;i++)
		cout<<a[i];
	return 0;
}