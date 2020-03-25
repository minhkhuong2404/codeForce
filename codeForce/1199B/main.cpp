#include <bits/stdc++.h>
using namespace std;

int main()
{
	double L,H,ans;
	cin>>H>>L;
	ans =  (pow(L,2) - pow(H,2) ) / (2*H);
	cout<<setprecision(10);
	cout<<fixed;
	cout<<ans;

	return 0;
}