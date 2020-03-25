#include <iostream>
int main()
{
	int a,b,c;
	std::cin>>a>>b>>c;
	std::cout << a*b + a*c + b*c -(a+b+c) +1;
//	a*b*c-(a-1)*(b-1)*(c-1)
//	(a+b-1)*(b+c-1)-(b-1)*b
//	(a - 1) * (b + c - 1) + b * c
	return 0;
}