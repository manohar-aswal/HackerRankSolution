#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int arr_i = 0;arr_i < n;arr_i++){
		cin >> arr[arr_i];
	}

	while(1)
	{
		int smallStick = 0;
		int StickCut = 0;
		for(int i = 0; i < n; i++)
		{
			if(arr[i] > 0)
			{
				StickCut++;
				if(smallStick == 0)
					smallStick = arr[i];
				if(arr[i] < smallStick)
					smallStick = arr[i];
			}
		}
		if(StickCut != 0)
		{
			cout << StickCut << endl;
			for(int i = 0;i < n;i++)
				arr[i] = arr[i] - smallStick;
		}
		else
			break;
	}
	return 0;
}

