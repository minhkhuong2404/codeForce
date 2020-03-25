#include <bits/stdc++.h>
using namespace std;

int main()
{
	int r,x,y,x2,y2;
	double d = 0;
	cin>>r>>x>>y>>x2>>y2;
	d = sqrt(pow(x2-x,2) + pow(y2-y,2));
	cout<<ceil(d/(2*r)) ;
	return 0;
}