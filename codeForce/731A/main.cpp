#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int count = 0;
	int a,b;
	cin>>s;
	for ( int i = 0;i < s.length();i++){
		if (i == 0){
			a = (int)(s[i] - 'a');
			count += min(abs(a),26 - abs(a));
		}
		else{
			a = (int)(s[i]- s[i-1]);
			count += min(abs(a),26 - abs(a));
		}
	}
	cout<<count;
	return 0;
}