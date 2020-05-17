#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int a0 = 0; a0 < t; a0++){
		int n;
		int c;
		int m;
		cin >> n >> c >> m;
		int TotalBuy = n / c;
		int TotalWrapper = TotalBuy;
		while(TotalWrapper - m >= 0)
		{
			TotalBuy++;
			TotalWrapper++;
			TotalWrapper -= m;
		}
		cout << TotalBuy << endl;
	}
	return 0;
}
