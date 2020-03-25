#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int ans = 0;
	while (s.size() > 1) {
		int sum = 0;
		for (auto c : s)
			sum += c - '0';
		s = to_string(sum), ans++;
	}
	cout << ans;
	return 0;

}