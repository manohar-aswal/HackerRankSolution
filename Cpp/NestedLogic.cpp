#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int d1;
	int m1;
	int y1;
	cin >> d1 >> m1 >> y1;
	int d2;
	int m2;
	int y2;
	cin >> d2 >> m2 >> y2;
	if(y1 > y2)
		cout << 10000 << endl;
	else if(m1 > m2)
		cout << 500 * abs(m1 - m2) << endl;
	else if(d1 > d2)
		cout << 15 * abs(d1 - d2) << endl;
	else
		cout << 0 << endl;
	return 0;
}
