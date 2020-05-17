#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

static int gcd(int x, int y)
{
	int rem = 0, a, b;

	a = (x > y) ? x : y; 
	b = (x < y) ? x : y;

	rem = b;
	while(a % b != 0)
	{
		rem = a % b;
		a = b;
		b = rem;
	}
	return rem;
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2;

		if(gcd(x1,y1) == gcd(x2,y2))
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0;
}
