#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int count = 0;
	for ( int i = 0;i < s.length();i++){
		bool appear = false;
		for (int j = 0;j < i;j++){
			if ( s[j] == s[i]){
				appear = true;
				break;
			}
		}
		if (!appear){
			count += 1;
		}
	}
	if (count % 2 != 0){
		cout<<"IGNORE HIM!";
	}
	else {
		cout <<"CHAT WITH HER!";
	}
	return 0;
}