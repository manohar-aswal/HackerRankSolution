#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector <int> arr; 

	for(int i = 0;i < N; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	sort(arr.begin(),arr.end());

	for(int i = 0; i < N; i++) 
	{
		cout << arr[i] << " ";
	}
	return 0;
}
