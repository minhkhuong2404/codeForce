#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s ="ROYG";
	int n;
	cin>>n;
	for (int i = 0; i < n - 3;i++){
		cout<<s[i%4];
	}
	cout<<"BIV"<<endl;
	return 0;
}