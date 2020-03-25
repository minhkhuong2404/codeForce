#include<iostream>
using namespace std;
const int maxn = 2e5+10;
int a[maxn],A[maxn]={0};
int main(){
	int n,sgn=1;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		A[i]=A[i-1]+a[i]*sgn;
		sgn*=-1;

		cout<<A[i]<<endl;
	}
	int num=0;
	for (int i=1;i<=n;i++){
		if (A[n]==A[i]+A[i-1]){
			num++;

			cout<<A[i]<<" * "<<A[i-1]<<endl;
		}
	}
	cout<<num<<endl;
	return 0;
}