#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int n;
	cin>>n>>s;
	long ans = 0;
	for (int i  = 0; i < n;i++){
		char a = s[i];
		int num = a - '0';
		if (num % 2 ==0 ){
			ans += i+1;
		}
	}
	cout<<ans;

	return 0;
}