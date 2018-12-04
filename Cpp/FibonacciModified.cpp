#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	unsigned long long int a,b,n;
	cin >> b >> b >> n;
	n = n - 2;
	while(n--)
	{
		unsigned long long int c = pow(b,2) + a;
		a = b;
		b = c;
	}
	cout << b << endl;
	return 0;
}

