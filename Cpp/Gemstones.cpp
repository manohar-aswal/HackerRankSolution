#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	vector <string> arr(t);
	for(int i = 0;i < t;i++)
	{
		cin >> arr[i];
	}
	int count = 0;
	for(char i = 'a';i <= 'z';i++)
	{
		int flag = 0;
		for(int j = 0; j < t;j++)
		{
			if(arr[j].find(i) != string::npos)
				flag++;
		}
		if(flag == t)
			count++;
	}
	cout << count << endl;
	return 0;
}

