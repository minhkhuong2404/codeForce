#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int count = 0;
	char ch[100] , c;
	for (int i = 0; i < s.length();i++){
		if ( toupper(s[i]) != 'A' && toupper(s[i]) != 'E' && toupper(s[i]) != 'Y' && toupper(s[i]) != 'O' && toupper(s[i]) != 'U' && toupper(s[i]) != 'I'){
			ch[count] = s[i];
			count += 1;
		}
	}
	for (int j = 0 ; j < count; j++){
		c = ch[j];
		cout<<".";
		putchar(tolower(c));
	}
	return 0;
}
