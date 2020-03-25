#include <bits/stdc++.h>
using namespace std;

int main()
{
	char s[100];
	int upper = 0,lower = 0;
	cin>>s;
	for ( int i = 0; i < strlen(s);i++){
		if (isupper(s[i])){
			upper += 1;
		}
		else{
			lower += 1;
		}
	}
//	cout<<upper<<" "<<lower<<endl;
	if (upper <= lower){
		int	i = 0;
		while(s[i]){
			char c;
			c = tolower(s[i]);
			cout<<c;
			i++;
		}
	}
	else{
		int	j = 0;
		while(s[j]){
			char c;
			c = toupper(s[j]);
			cout<<c;
			j++;
		}
	}
	return 0;
}