#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	char c;
	for ( int i = 0 ; i < n;i++){
		for ( int j = 0; j < m;j++){
			cin>>c;
			if (c == 'C' || c == 'M' || c == 'Y'){
				cout<<"#Color";
				exit(0);
			}
		}
	}
	cout<<"#Black&White";
	return 0;
}