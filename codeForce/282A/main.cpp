#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, num = 0;
	cin>>n;
	string s[n];
	for ( int i = 0; i < n;i++){
		cin>>s[i];
		if (s[i][1] == '+'){
			num += 1;
		}
		else{
			num -= 1;
		}
	}
	cout<<num;
	return 0;
}