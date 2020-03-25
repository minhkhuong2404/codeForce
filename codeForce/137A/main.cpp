#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int count = 0,temp = 0;
	cin>>s;
	for (int i  = 0; i < s.length();i++){
		if (s[i] != s[i+1] ){
			if ( temp <= 5 && temp > 0){
				temp = 0;
				count += 1;
			}
			else if (temp == 0 ){
				count += 1;
				temp = 0;
			}
		} else{
			if (temp == 4){
				count += 1;
				temp = 0;
			}else {
				temp += 1;
			}
		}
	}
	cout<<count;
	return 0;
}