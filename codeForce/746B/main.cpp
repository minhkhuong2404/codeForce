#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s,out="";
	cin>>n>>s;
	for(int i=0;s[i]!='\0';++i){
		if((n-i)%2)
			out=out+s[i];
		else
			out=s[i]+out;
//		cout<<out<<endl;
	}
	cout<<out;
	return 0;
}