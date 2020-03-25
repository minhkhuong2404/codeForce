#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,b,d, count = 0,time = 0;
	cin>>n>>b>>d;
	if ( b > d){
		exit(0);
	}
	int a[n];
	for ( int i = 0; i < n;i++){
		cin>>a[i];
		if (a[i] > b){
			continue;
		}
		else{
			count += a[i];
			if (count > d){
				time += 1;
				count = 0;
			}
		}
	}
	cout<<time;
	return 0;
}