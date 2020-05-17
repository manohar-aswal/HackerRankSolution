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
		int N,K;
		cin >> N >> K;
		vector <int> arr(N);
		int k = 0;    
		for(int i = 0; i < N; i++)
		{
			if(i%2 == 0)
				arr[i] = N - 1 - k;
			else 
				arr[i] = k;
			if(i%2 != 0)
				k++;
		}

		for(int i = 0;i < N;i++)
		{
			if(arr[i] == K)
			{
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}


