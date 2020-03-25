#include <bits/stdc++.h>
using namespace std;

int main()
{
	double x,y,z,a,b,c;
	cin>>a>>b>>c;
	x = sqrt(a*b/c);
	y = a/x;
	z = b/x;

	cout<<(x+y+z)*4;
	return 0;
}