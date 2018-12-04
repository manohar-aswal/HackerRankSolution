#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 10000

int main() {
	int t;
	cin >> t;
	while(t--) 
	{
		int n, currMax, maxCsum, maxSum = 0;
		currMax = maxCsum = (-1 * MAX);
		cin >> n;
		for(int a,i = 0;i < n; ++i) 
		{
			cin >> a;
			currMax = max(a,currMax + a);
			maxCsum = max(currMax,maxCsum);
			if(a > 0)
				maxSum += a;
		}
		if (maxCsum < 0)
			maxSum = maxCsum;
		cout << maxCsum << " " << maxSum << endl;
	}
	return 0;
}

