#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	int value[3] = {0};
	for (int j = 0; j < 3;j++) {
		getline(cin,a);
		for (int i = 0; i<a.length(); i++) {
			if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') {
				value[j]++;
			}
		}
	}
	if (value[0] == 5 && value[1] ==  7 && value[2] == 5){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}