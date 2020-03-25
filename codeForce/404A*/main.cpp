#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	char c;
	set<char> diagonal, other;
	cin>>n;
	for ( int i  = 1 ;i <= n;i++){
		for ( int j = 1;j <= n ;j++){
			cin>>c;
			if (i == j || i == (n - j + 1)){
				diagonal.insert(c);
			}
			else{
				other.insert(c);
			}
		}
	}
	if ( diagonal.size() == 1 && other.size() == 1 && *diagonal.begin() != *other.begin()){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
/*
	3
aaa
aaa
aaa
 */