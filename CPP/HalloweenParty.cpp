#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t,i;
	long int out,k;
	cin >> t;
	while(t--)
	{
		cin >> k;
		if(k%2==0)
		{
			out = k/2;
			out = out * out;
			cout << out << endl;
		}
		else
		{
			out = k/2;
			out = out * (out + 1);
			cout << out << endl;
		}
	}
}

