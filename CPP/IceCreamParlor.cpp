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
		int m,n;
		cin >> m >> n;
		vector <int> arr(n);
		for(int i = 0;i < n;i++)
			cin >> arr[i];
		for(int i = 0;i < n - 1;i++)
		{
			for(int j = i + 1;j < n;j++)
			{
				if(arr[i] + arr[j] == m)
					cout << i + 1 << " " << j + 1;
			}
		}
		cout << endl;
	}
	return 0;
}

