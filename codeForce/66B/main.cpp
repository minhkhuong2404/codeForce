#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n],mx=0;
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++){
		int end = i;
		for(int j=i+1;j<n;j++)
			if(arr[j] >= arr[j-1])
				end = j;
			else break;
		for(int j=end+1;j<n;j++)
			if(arr[j] <= arr[j-1])
				end = j;
			else break;
		if(end-i+1 > mx)
			mx = end-i+1;
	}cout<<mx<<endl;
	return 0;
}