#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m,x,y,right = 0,left = 0;
	cin>>m;
	int c[m];
	for ( int i =0 ;i < m;i++){
		cin>>c[i];
		right += c[i];
	}
//	cout<<left<<" "<<right<<endl;
	cin>>x>>y;
	for ( int j = 1; j <= m;j++) {
		if (left <= y && left >= x && right<=y && right>=x) {
			cout << j << endl;
			exit(0);
		}
		left += c[j-1];
		right -= c[j-1];
	}
	cout<<0;
	return 0;
}
/*
 10
 1 1 1 1 1 1 1 1 1 1
 5 5
 5
 2 2 2 2 2
 5 5
 */