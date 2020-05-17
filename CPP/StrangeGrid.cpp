#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long int c,r;
	cin >> r >> c;
	int start = 0;
	if((r - 1) % 2 == 0)
		start = 5 * (r - 1);
	else 
		start = 5 * (r - 2) + 1;
	cout << start + (c - 1) * 2 << endl;
	return 0;
}
