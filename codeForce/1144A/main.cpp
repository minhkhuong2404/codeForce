#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ans[101] = {0};
	string s[n];
	for (int i = 0; i < n;i++){
		cin>>s[i];
		sort(s[i].begin(),s[i].end());
		for(int j = 1 ;j < s[i].length();j++){
			if (s[i].length() != 1) {
				if (s[i][j]-s[i][j-1] != 1) {
					ans[i] += 1;
				}
			}
		}
	}

	for (int i = 0; i < n;i++){
		ans[i] == 0 ? cout<<"Yes\n" : cout<<"No\n";
	}
	return 0;
}