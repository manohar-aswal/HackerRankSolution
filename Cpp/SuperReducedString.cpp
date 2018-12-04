#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	int len = str.length();
	for(int i = 0;i < len - 1;i++)
	{
		if(str[i] == str[i + 1])
		{
			str.erase (i,2);
			i = i - 2;
			len = str.length();
		}
	}
	if(!str.empty())
		cout << str << endl;
	else
		cout << "Empty String" << endl;
	return 0;
}

