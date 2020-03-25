#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	long long arr[100] ;
	getline(cin,s);
	int j = 0;
	for ( int i = 0; i < s.length(); i++){
		if ( isdigit(s[i]) != 0){
			arr[j] = s[i] - '0';
			j++;
		}
	}
	sort(arr,arr+(s.length()+1)/2);
	for ( int i = 0;i < (s.length()+1)/2 ;i++){
		if ( i == 0){
			cout<<arr[i];
		}
		else{
			cout<<"+"<<arr[i];
		}
	}

	return 0;
}