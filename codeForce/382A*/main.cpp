#include <bits/stdc++.h>
using namespace std;
string s,w;
int main(){
	cin>>w>>s;
	for(auto i:s) w = w.find('|') < w.size()/2 ? i+w : w+i;
	cout<<(w.size() %2 && w[w.size()/2]=='|'? w :"Impossible");
}