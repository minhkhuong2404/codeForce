#include <bits/stdc++.h>
using namespace std;

const int ms = 1001000;

bool hole[ms];

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	while(m--) {
		int v;
		cin >> v;
		hole[v] = true;
	}
	int on = 1;
	while(k--) {
		if(hole[on]) break;
		int u, v;
		cin >> u >> v;
		if(on == u) on = v;
		else if(on == v) on = u;
	}
	cout << on << '\n';
}