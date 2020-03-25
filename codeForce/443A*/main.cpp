#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int checked[1000];
	memset(checked,0,sizeof(checked));
	int x = 0;
	for ( int i = 0 ;i < s.length();i++){
		if (!(s[i] == '{' || s[i] == '}' || s[i] == ',' || s[i] == ' ')){
			if (checked[s[i]] == 0){
				x++;
				checked[s[i]] = 1;
			}
		}
		else{
			continue;
		}
	}
	cout<<x;
	return 0;
}