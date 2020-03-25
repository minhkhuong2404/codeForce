#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,x;
	cin>>a>>b>>x;
	(x - (abs(a)+abs(b))) % 2 == 0 && x - (abs(a)+abs(b)) >= 0 ? cout<<"YES" : cout<<"NO";
	return 0;
}