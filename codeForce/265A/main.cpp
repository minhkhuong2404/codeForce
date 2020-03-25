#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	string t;
	int count = 1,j = 0;
	cin>>s>>t;
	for ( int i = 0;i< t.length();i++){
		if (s[j] == t[i]){
			count += 1;
			j++;
		}
	}
	cout<<count;
	return 0;
}