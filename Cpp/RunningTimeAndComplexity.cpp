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
		int c = 0;
		cin >> n;
		for(int i = 2;i * i <= n;++i)
		{
			if(n % i == 0)
			{
				c++;
				break;
			}
		}
		if(!c && n != 1)
			cout << "Prime" << endl;
		else
			cout << "Not prime" << endl;   
	}
	return 0;
}

