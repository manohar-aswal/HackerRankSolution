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
		string str;
		cin >> str;
		int flag = 0;
		for(int j = 0 ; j < str.length() - 1; j++) 
		{
			if(abs(str[j + 1] - str[j]) != abs(str[str.length() - 2 - j] - str[str.length() - 1 - j]))
			{
				flag = 1;
				break;
			}
		}
		if(flag)
			cout << "Not Funny" << endl; 
		else 
			cout << "Funny" << endl;
	}
	return 0;
}

