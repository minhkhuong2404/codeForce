#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int ans ,last = 1;
	cin>>s;
	for (int i = 0;i < 2;i++){
		ans = 0;
		if (s[i] == '0' || s[i] == '9' || s[i] == '6' || s[i] == '2'){
			ans += 2;
		}
		else if (s[i] == '8'){
			ans += 1;
		}
		else if (s[i] == '3' || s[i] == '4' ){
			ans += 3;
		}
		else if (s[i] == '1'){
			ans += 7;
		}
		else if (s[i] == '5'){
			ans += 4;
		}
		else if (s[i] == '7'){
			ans += 5;
		}
		last *= ans;
	}
	cout<<last;
	return 0;
}