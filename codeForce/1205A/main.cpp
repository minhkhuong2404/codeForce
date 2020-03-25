#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n%2==0) return cout << "NO\n",0;
	cout << "YES\n";
	for(int i=1; i<=n ;i++){
		cout << 2*i-i%2 << ' ';
	}
	for(int i=1; i<=n ;i++){
		cout << 2*i+i%2-1 << ' ';
	}
	return 0;
}