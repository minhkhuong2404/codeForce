#include <bits/stdc++.h>
using namespace std;

/* shorted version */
//int remove0s(int i){
//	int c=0,x=1;
//	while(i!=0){
//		if(i%10!=0){
//			c+=i%10*x;
//			x*=10;
//		}
//		i/=10;
//	}
//	return c;
//}

int main()
{
	string a,b;
	cin>>a>>b;
	string cc;
	int c = stoi(a) + stoi(b) ;
	cc= to_string(c) ;
	a.erase (std::remove(a.begin(), a.end(), '0'), a.end());
	b.erase (std::remove(b.begin(), b.end(), '0'), b.end());
	cc.erase (std::remove(cc.begin(), cc.end(), '0'), cc.end());
	if ( stoi(cc) == stoi(a) +stoi(b)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}