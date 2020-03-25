#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,s;
	cin>>n;
	while( n-- > 0){
		string digit;
		cin>>s>>digit;
		if ( s == 2 && digit[0] >= digit[1]){
			cout<<"NO"<<'\n';
		}
		else{
			cout<<"YES"<<'\n';
			cout<<"2"<<'\n';
			cout<<digit[0]<<" "<<digit.substr(1)<<'\n';
		}
	}
	return 0;
}