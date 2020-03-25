#include <bits/stdc++.h>

using namespace std;

char str[3] , ans[3];
map<char,int> mp;
int main(){

	for(int i=0;i<3;++i){
		scanf("%s",str);
		if(str[1]=='<') swap( str[0] , str[2] );
		++mp[str[0]] , mp[str[2]] += 0;
	}

	for(map<char,int>::iterator it=mp.begin(); it!=mp.end(); ++it)
		ans[it->second] = it->first;

	ans[3] = '\0';
	printf("%s\n", (ans[0] && ans[1] && ans[2]) ? ans : "Impossible");
	return 0;
}