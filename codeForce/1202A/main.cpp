#include <bits/stdc++.h>
using namespace std;
int T, nx, ny;
string x,y;
int main()
{
	cin>>T;
	while(T--) {
		cin >> x >> y; //1010 11
		for(int i = 0; i < y.size();i++)
			if (y[i] == '1')
				ny = y.size() - i; // find smallest index of y
//		cout<<ny;
		for (int i = x.size();i >= ny;i--)
			if (x[x.size()-i] == '1')
				nx = i; // find smallest index of x
		cout<<nx - ny<<endl;
	}
	return 0;
}