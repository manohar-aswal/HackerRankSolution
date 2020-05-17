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
		long int a,b,n,out;
		cin >> a >> b >> n;
		n = n - 1;
		if(!n)
		{
			cout << b << endl;
			continue;
		}
		while(n--)
		{
			out = a + b;
			a = b;
			b = out; 
		}    
		cout << out << endl;
	}
	return 0;
}
