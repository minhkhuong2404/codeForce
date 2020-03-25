#include <bits/stdc++.h>
int main(){
	long long n , a , b;
	std::cin >> n >> a >> b;
	std::cout << ((a-1+b)%n + n)% n + 1;
}