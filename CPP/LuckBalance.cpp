#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N,K;
	cin >> N >> K;
	vector <int> arr;
	int LuckBal = 0;
	int i = 0;
	while(N--)
	{
		int L,T;
		cin >> L >> T;
		if(T != 0)
		{
			arr.push_back(L);
		}
		else
			LuckBal += L;
	}
	sort(arr.begin(),arr.end(),greater<int>());
	for (int a : arr) 
	{
		if(K)
		{
			LuckBal += a;
			K--;
		}
		else 
			LuckBal -= a; 
	}   
	cout << LuckBal << endl;
	return 0;
}

