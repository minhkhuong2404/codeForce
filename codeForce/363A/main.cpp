#include <bits/stdc++.h>
using namespace std;

int main()
{
	long n;
	cin>>n;
	if(!n){
		cout<<"O-|-OOOO\n";
		return 0;
	}
	while(n){
		int m=n%10;
		n/=10;
		string s="--|OOOOO";
		if(m>=5)s[1]='O';
		else s[0]='O';
		s[m%5+3]='-';
		cout<<s<<endl;
	}
	return 0;
}