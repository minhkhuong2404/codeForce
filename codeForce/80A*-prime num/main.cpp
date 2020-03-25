#include <bits/stdc++.h>
using namespace std;
bool IsPrime(int number)
{

	if (number == 2 || number == 3)
		return true;

	if (number % 2 == 0 || number % 3 == 0)
		return false;

	int divisor = 6;
	while (divisor * divisor - 2 * divisor + 1 <= number)
	{

		if (number % (divisor - 1) == 0)
			return false;

		if (number % (divisor + 1) == 0)
			return false;

		divisor += 6;

	}
	return true;

}
int main()
{
	int n, m;
	cin>>n>>m;
	int prime1 = n;
	while (!IsPrime(++prime1))
	{ };
	if (  prime1 == m){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}