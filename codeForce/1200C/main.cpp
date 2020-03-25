#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m,q,sx,sy,ex,ey, k[3];
	cin>>n>>m>>q;
	k[1] = n/gcd(n,m); k[2] = m/gcd(n,m); // 2 and 3
	while (q--){
		cin>>sx>>sy>>ex>>ey;
		if ( (sy-1)/k[sx] == (ey-1)/k[ex])cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}