#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	vector <int> ar1(t);
	vector <int> ar2(t);

	for(int i = 0;i < t;i++) 
		cin >> ar1[i] >> ar2[i];

	for(int i = 0;i < t;i++)
		cout << (int)(floor(sqrt(ar2[i]))-ceil(sqrt(ar1[i]))+1) << endl;

	return 0;
}

