#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool ispalindrome(string str)
{
	int i = 0, j = str.length() - 1;
	while (i < j)
	{
		if (str[i] != str[j]) 
			return false;
		i++,j--;
	}
	return true;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		int i = 0;
		int j = str.length() - 1;

		int out = -1;
		while (i < j && str[i] == str[j]) i++, j--;

		if (i < j)
		{
			string str1 = str.substr(0, i) + str.substr(i + 1, str.length() - i - 1);
			if (ispalindrome(str1)) 
				out = i;
			string str2 = str.substr(0, j) + str.substr(j + 1, str.length() - j - 1);
			if (ispalindrome(str2)) 
				out = j;
		}

		cout << out << endl;
	}
	return 0;
}

