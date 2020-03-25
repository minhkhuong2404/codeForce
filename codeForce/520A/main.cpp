#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char a[n];
	char c;
	set<char> alpha;
	for ( int i = 0; i < n;i++){
		cin>>a[i];
		c = a[i];
		alpha.insert(tolower(c));
	}
	if (alpha.size() == 26){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}