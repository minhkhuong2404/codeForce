#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,count = 0;
	long long x = 0;
	cin>>n>>x;
	long long d[n];
	char sign[n];
	for ( int i  =0 ; i < n;i++){
		cin>>sign[i]>>d[i];
	}
	for ( int j  = 0; j < n;j++){
		if (sign[j] == '+'){
			x += d[j];
		}
		else{
			if (x < d[j]){
				count += 1;
			}
			else{
				x -= d[j];
			}
		}
	}
	cout<<x<<"  "<<count;
	return 0;
}