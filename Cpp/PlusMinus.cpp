#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int pos = 0,neg = 0,zero = 0;
	vector<int> arr(n);
	for(int arr_i = 0;arr_i < n;arr_i++){ 
		cin >> arr[arr_i];
		if(arr[arr_i] > 0)
			pos++;
		else if(arr[arr_i] == 0)
			zero++;
		else 
			neg++;
	}
	cout << (float)pos/n << endl;
	cout << (float)neg/n << endl;
	cout << (float)zero/n << endl;
	return 0;
}
