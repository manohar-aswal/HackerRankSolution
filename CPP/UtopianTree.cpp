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
		int height = 1;
		cin >> n;
		for(int i = 1;i <= n;i++)
		{
			if(i%2 != 0)
				height = 2 * height;
			else 
				height++;
		}
		cout << height << endl;
	}
	return 0;
}
