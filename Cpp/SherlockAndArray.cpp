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
		int n,flag = 0;  
		unsigned long long lsum=0,rsum = 0;  
		cin>>n;  
		vector <int> arr(n);
		for(int i=0;i<n;i++)
		{  
			cin>>arr[i];  
			rsum += arr[i];       
		}  
		for(int i=0;i<n;i++)   
		{  
			rsum -= arr[i];  
			if(i>0)
				lsum += arr[i-1];
 
			if(lsum == rsum)
				flag = 1;  
		}  
		if(flag == 1)
			cout << "YES" <<endl;  
		else  
			cout << "NO" <<endl;  
	}
	return 0;
}

