#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {  
	int t;
	cin >> t;
	for(int i = 0;i < t;i++)
	{
		unsigned int num;
		cin >> num; 
		cout << (num ^ -1) << endl;
	}
	return 0;
}

