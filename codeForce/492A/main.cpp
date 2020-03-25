#include <iostream>
using namespace std;

int main()
{
	int n,i =1,ans =0,sum = 1 ;
	cin>>n;
	while (n >= 0){
		n-= sum;
		if (n < 0){
			break;
		}
		i++, ans++;
		sum += i;
	}
	cout<<ans;
	return 0;
}