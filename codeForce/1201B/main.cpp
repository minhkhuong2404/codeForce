#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, sum = 0,mx = -100 , a;
	cin>>n;
	for (long i = 0 ;i < n ;i++){
		cin>>a;
		sum += a;
		mx = max(mx,a);
	}
	sum % 2 == 0 && mx <= sum-mx ? cout<<"YES" : cout<<"NO";
	return 0;
}