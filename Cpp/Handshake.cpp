#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int n = 0;
		int out = 0;
		cin >> n;
		while(n--)
			out += n;
		cout << out << endl;
	}
	return 0;
}
