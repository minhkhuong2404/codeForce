#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,count = 0 ,free = 0;
	cin>>n;
	int a[n];
	for( int i = 0; i < n;i++){
		cin>>a[i];
	}
	for ( int j = 0;j < n;j++){
		if (a[j] != -1) {
			free += a[j];
		}
		else{
			if (free != 0) {
				free--;
			}
			else{
				count += 1;
			}
		}

	}
	cout<<count;
	return 0;
}