#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t;i++)
	{
		int x1,x2,y1,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << 2*x2- x1 << " " << 2*y2 - y1 << endl;
	}
	return 0;
}
