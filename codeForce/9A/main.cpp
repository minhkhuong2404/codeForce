#include <bits/stdc++.h>
using namespace std;
int UCLN(int a,int b){
	while (a != b){
		if (a > b){
			a = a - b;
		}
		else{
			b = b - a;
		}
	}
	return a;
}
int main()
{
	int y,w, m,a,b;
	cin>>y>>w;
	m = max(y,w);
	a = 6-m+1;
	b = 6 ;
	if (UCLN(a,b) > 1){
		cout<<a/UCLN(a,b)<<"/"<<b/UCLN(a,b);
	}
	else if (UCLN(a,b) <= 1 ){
		cout<<a<<"/"<<b;
	}
	return 0;
}