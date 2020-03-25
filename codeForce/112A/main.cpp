#include <bits/stdc++.h>
using namespace std;

int main()
{
	char a[100],b[100];
	cin>>a;
	cin>>b;
	int i = 0;
	char c,d;
	while (a[i]){
		c = a[i];
		d = b[i];
		a[i] = toupper(c);
		b[i] = toupper(d);
		i++;
	}
	if (strcmp(a,b) > 0){
		cout<<1;
	}
	else if (strcmp(a,b) < 0){
		cout<<-1;
	}
	else{
		cout<<0;
	}

	return 0;
}