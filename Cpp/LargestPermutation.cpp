#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	vector <int> arr(n);
	for(int i = 0;i < n;i++)
		cin >> arr[i];

	for(int i = 0;i < k;i++)
	{
		int large = arr[i];
		int index = i;
		for(int j = i + 1;j < n;j++)
		{
			if(large < arr[j])
			{
				large = arr[j];
				index = j;
			}
		}
		if(index != i)
		{
			arr[index] = arr[i];
			arr[i] = large;
		}
		else if(k < n)
			k++;
	}
	for(int i = 0;i < n;i++)
		cout << arr[i] << " ";
	return 0;
}
