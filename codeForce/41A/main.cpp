#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,r;
	cin>>s>>r;
	int count = 0;
	for ( int i = 0; i < s.length();i++){
		if (s[i] == r[s.length() - 1 - i]){
			count += 1;
		}
	}
	if ( count == s.length()){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}