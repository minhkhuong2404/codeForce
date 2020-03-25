#include <bits/stdc++.h>
using namespace std;

int main()
{
//	int n,count;
//	cin>>n;
//	char arr[n+1][n+1] ;
//	for ( int i = 1; i <= n;i++){
//		for ( int j = 1; j <= n;j++){
//			cin>>arr[i][j];
//		}
//	}
//
//	for ( int i = 1; i <= n;i++){
//		for ( int j = 1; j <= n;j++){
//			count = 0;
//			if (arr[i+1][j] == 'o'){
//				count += 1;
//			}
//			if (arr[i-1][j] == 'o'){
//				count += 1;
//			}
//			if ( arr[i][j+1] == 'o'){
//				count += 1;
//			}
//			if (arr[i][j-1] == 'o') {
//				count += 1;
//			}
//			if (count % 2 != 0){
//				cout<<"NO";
//				exit(0);
//			}
//		}
//	}
//	cout<<"YES";

	int n;
	string s1,s2,s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		s1+=s;
	}
	s2=s1;
	reverse(s2.begin(),s2.end());
	if(s2==s1)
	{
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}