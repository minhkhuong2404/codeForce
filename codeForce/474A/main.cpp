#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s[3] = {"qwertyuiop" , "asdfghjkl;" , "zxcvbnm,./" };

	char n;
	string p;
	cin>>n;
	cin>>p;
	for (int k = 0; k < p.length(); k++){
		for ( int i = 0; i < 3;i++){
			for (int j = 0; j < 10;j++){
				if (s[i][j] == p[k] ){
//					cout<<s[i][j-1]<<" * "<<s[i][j+1]<<endl;
					if (n == 'R') {
						p[k] = s[i][j-1];
					}
					if (n == 'L'){
						p[k] = s[i][j+1];
						break;
					}
				}
			}
		}
	}
	cout<<p;
	return 0;
}
/*
L
zxcvbnm,kjhgfdsaqwertyuio
 */