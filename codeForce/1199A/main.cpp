#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,y,ans = 0;
	cin>>n>>x>>y;
	int arr[100002] = {0};
	for(int i = 0; i < n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]<arr[ans])
			ans=i;

		if(i-ans>=y)
			break;
	}
	cout<<ans+1;
	return 0;

}