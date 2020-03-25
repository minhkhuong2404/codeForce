#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	char c = 'a';
	for(int i = 0; i < n;i++){
		cout<<c;
		c += 1;
		if ( ((c - '0') - 49) == k){
			c = 'a';
		}
	}

	return 0;
}