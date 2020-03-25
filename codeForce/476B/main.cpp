#include <bits/stdc++.h>
using namespace std;

int main()
{
	char s1[12],s2[12];
	cin>>s1>>s2;
	int n= strlen(s1);
	int answerPosition = 0;
	for(int i=0;i<n;i++)
		answerPosition += (s1[i]=='+'?1:-1) ;

	int finalPosition = 0 ;
	int moves = 0;
	for(int i=0;i<n;i++){
		if (s2[i] == '?'){
			moves ++;
		} else{
			finalPosition += (s2[i]=='+'?1:-1) ;
		}
	}
	int distance = answerPosition-finalPosition ; // diff between signals sent and received
	double ans ;

	if((distance+moves)%2!=0 || moves<abs(distance)) //can't reach the destination no matter how
		ans = 0 ;
	else{
		int m = (moves+abs(distance))/2 ;
		int c = 1 ;
		for(int i=0;i<m;i++)
			c *= moves-i ;
		for(int i=2;i<=m;i++)
			c /= i ;
		ans = (double)c/(1<<moves) ;
	}
	cout<<setprecision(12)<<ans;
	return 0;
}