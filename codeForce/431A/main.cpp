#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,sum = 0;
	string s;
	cin>>a>>b>>c>>d;
	cin>>s;
	for ( int i = 0;i< s.length();i++){
		if (s[i] == '1'){
			sum += a;
		}
		else if (s[i] == '2'){
			sum += b;
		}
		else if ( s[i] == '3'){
			sum += c;
		}
		else{
			sum += d;
		}
	}
	cout<<sum;
	return 0;
}