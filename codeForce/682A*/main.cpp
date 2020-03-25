#include <iostream>
using namespace std;

long long n,m,i=1,a;

int main() {
	cin>>n>>m;
	for(;i<=n;i++)a+=(m+i%5)/5;
	cout<<a;
}