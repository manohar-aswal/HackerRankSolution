#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long N,M,a,b,k;
	cin >> N >> M;
	long out = 0;

	while(M--)
	{
		cin >> a >> b >> k;
		out += (abs(a-b)+1)*k;
	}
	out = floor(out / N);
	cout << out << endl;
	return 0;
}

