#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s[100];
	int n;
	cin>>n;
	for ( int i = 0; i < n;i++){
		cin>>s[i];
	}
	for ( int j = 0; j < n; j++){
		if (s[j].length() <= 10){
			cout<<s[j]<<endl;
		}
		else{
			cout<<s[j][0]<<s[j].length()-2<<s[j][s[j].length() - 1]<<endl;
		}
	}
	return 0;
}