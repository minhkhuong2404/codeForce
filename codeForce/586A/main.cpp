#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,p = 0,i = 0;
	cin>>n;
	int arr[n];
	for (int j = 0 ; j < n;j++){
		cin>>arr[j];
	}
	while(i < n ){
		if (arr[i] == 0){
			i++;
		}else {
			if (i < 2){
				i++;
				p++;
			}else{
				if (arr[i-2] == 1 && arr[i-1] == 0){
					i ++;
					p += 2;
				}else {
					i++;
					p++;
				}
			}
		}
//		cout<<p<<" "<<i<<endl;
	}
	cout<<p;
	return 0;
}
/*
10
1 0 1 0 1 0 1 1 0 1
 */