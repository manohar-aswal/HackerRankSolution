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
		string str;
		int count = 0;
		cin >> str;
		for(int i = 0; i < str.size()/2;i++)
		{
			if(str[i] > str[str.size() - 1 - i])
				count += str[i] - str[str.size() - 1 - i];
			else if(str[i] < str[str.size() - 1 - i])
				count += str[str.size() - 1 -i] - str[i];
			else 
				continue;
		}
		cout << count << endl;
	}
	return 0;
}
