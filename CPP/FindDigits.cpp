#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	vector <int> ar(t);
	for(int a0 = 0; a0 < t; a0++){
		int n;
		cin >> n;
		ar[a0] = n;
	}
	for(int i = 0; i < t; i++)
	{
		int num = ar[i];
		int count = 0;
		while(num)
		{
			int r = num % 10;
			if(r != 0 && ar[i] % r == 0)
				count++;
			num = num / 10;
		}
		cout << count << endl;
	}
	return 0;
}
