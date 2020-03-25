#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	double sum = 0;
	cin>>n>>k;
	int x[n],y[n];
	for (int i = 0 ; i < n ;i++){
		cin>>x[i]>>y[i];
		if ( i >= 1){
			sum += sqrt(pow(x[i] - x[i-1],2) + pow(y[i] - y[i-1],2));
		}
	}
	double f = sum/50*k;
	cout<<fixed;
	cout<<setprecision(9)<<f;
	return 0;
}