#include <iostream>
using namespace std;
int main(int n)
{
	cin >> n;
	while(cin>>n)
		cout<<(360%(180-n)?"NO\n":"YES\n");
}