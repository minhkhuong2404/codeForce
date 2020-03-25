#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int cnt = 0;
	for(int i= 1; i < s.length();i++){
		if (s[i] == '1') cnt=1;
	}
	cout<<((int)s.length()+cnt)/2;
	return 0;
}