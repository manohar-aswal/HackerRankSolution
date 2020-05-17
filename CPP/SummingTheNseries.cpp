#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t; 
	while(t--)
	{
		long int n;
		int out = 0;
		cin >> n;
		out = ((n % 1000000007) * (n % 1000000007)) % (1000000007);
		cout << out << endl;
	}
	return 0;
}
