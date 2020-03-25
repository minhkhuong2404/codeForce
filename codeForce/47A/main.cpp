#include <iostream>
using namespace std;

int main()
{
	int n,sum = 0,i =1;
	cin>>n;
	while (sum < n ){
		sum += i;
		i++;
	}
	sum == n? cout<<"YES" : cout<<"NO";
	return 0;
}