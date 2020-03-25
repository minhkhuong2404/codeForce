#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,zero = 0,one = 0;
	string s;
	cin>>n>>s;
	for ( int i = 0; i < s.length();i++){
		if (s[i] == '0'){
			zero += 1;
		}
		else{
			one += 1;
		}
	}
	cout<<n - 2*min(zero,one);
	return 0;
}