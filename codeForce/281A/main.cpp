#include <bits/stdc++.h>
using namespace std;

int main()
{
	char s[1000];
	cin>>s;
	int i = 0;
	while (s[i]) {
		char c;
		if ( i == 0){
			c = s[0];
			putchar(toupper(c));
		}
		else {
			c = s[i];
			putchar((c));
		}
		i++;
	}
		return 0;
}