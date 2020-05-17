#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,sum = 0;
	cin >> n;
	vector< vector<int> > a(n,vector<int>(n));
	for(int a_i = 0;a_i < n;a_i++){
		for(int a_j = 0;a_j < n;a_j++){
			cin >> a[a_i][a_j];
			if(a_i == a_j)
				sum = sum + a[a_i][a_j];
			if(a_j == n - a_i - 1)
				sum = sum - a[a_i][a_j];
		}
	}
	cout << abs(sum);
	return 0; 
}

