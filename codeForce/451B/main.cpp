#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,first=0,last=0,i;
	cin>>n;
	int a[n],b[n];

	for(i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}

	sort(b,b+n);

	for(i=0;i<n;i++){
		if(a[i]!=b[i]) {first=i;break;}
	}

	for(i=n-1;i>=0;i--){
		if(a[i]!=b[i])  {last=i;break;}
	}

	reverse(a+first,a+last+1);
	for(i=0;i<n;i++){
		if(a[i]!=b[i]) {cout<<"no";return 0;}
	}

	cout<<"yes\n"<<first+1<<" "<<last+1;
	return 0;
}
