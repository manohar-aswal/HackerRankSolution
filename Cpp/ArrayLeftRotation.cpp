/*
   Sample Input :

   5 4
   1 2 3 4 5

   Sample Output :

   5 1 2 3 4
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n,d;
	cin >> n >> d;
	vector <int> arr;
	for(int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}
	rotate(arr.begin(),arr.begin() + d,arr.end());
	for(vector <int> :: iterator it = arr.begin();it != arr.end(); ++it)
		cout << *it << ' ';
	cout << endl;
	return 0;
}
