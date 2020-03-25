#include <bits/stdc++.h>
using namespace std;

int main()
{
	int l,r,a;
	cin>>l>>r>>a;
	while ( a ) {
		if (l < r){
			l++, a--;
		} else{
			r++, a--;
		}
	}
	cout<<min(l,r)*2;
	return 0;
}