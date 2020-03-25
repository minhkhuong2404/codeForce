#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test,a,b,n;
	cin>>test;
	while(test--){
		cin>>a>>b>>n;
		switch (n%3){
		case 0:
			cout<<a<<endl;
			break;
		case 1:
			cout<<b<<endl;
			break;
		default:
			cout<<(a^b)<<endl;
		}
	}
	return 0;
}