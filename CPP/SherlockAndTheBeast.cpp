#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int a0 = 0; a0 < t; a0++){
		int n;
		cin >> n;
		int z = n;
		if(z <= 0)
			cout << "-1" << endl;
		else
		{
			if(z%3 == 0)
			{
				cout << string(z,'5') << endl;
			}
			while(z%3 != 0)
			{
				z -= 5;
				if(z < 0)
				{
					cout << "-1" << endl;
					break;
				}
				else
				{
					if(z%3 == 0)
						cout << string(z,'5') << string((n-z),'3') << endl;
				}
			}
		}
	}
	return 0;
}
