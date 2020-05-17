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
		int count = 0;
		int arr1[26] = {0};
		int arr2[26] = {0};
		string str;
		cin >> str;
		if(str.length()%2 != 0)
		{
			cout << -1 << endl;
			continue;
		}
		string str1 = str.substr(str.size()/2,str.size()/2);
		string str2 = str.substr(0,str.size()/2);

		for(int i = 0; i < str.length()/2;i++)
		{
			arr1[str1[i] - 97]++;
			arr2[str2[i] - 97]++;
		}

		for(int i = 0; i < 26; i++)
			count += abs(arr1[i] - arr2[i]);
		cout << count/2 << endl;
	}
	return 0;
}

