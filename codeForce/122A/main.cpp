#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int s[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	bool flag = false;
	cin>>n;
	for ( int i = 0 ; i < 14;i++){
		if ( n % s[i] == 0){
			flag = true;
			break;
		}
	}
	flag ? cout<<"YES" : cout<<"NO";
	return 0;
}