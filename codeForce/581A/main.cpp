#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,diff = 0,same = 0;
	cin>>a>>b;
	while (a && b){
		a--,b--;
		diff++;
	}
	same = max(a,b)/2;
	cout<<diff<<" "<<same;
	return 0;
}