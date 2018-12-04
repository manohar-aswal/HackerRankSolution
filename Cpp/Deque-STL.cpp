/*
   Sample Input :
   2
   5 2
   3 4 6 3 4
   7 4
   3 4 5 8 1 4 10

   Sample Output :
   4 6 6 4
   8 8 8 10
 */

#include <iostream>
#include <deque> 

using namespace std;

void printKMax(int arr[], int n, int k)
{
	deque <int> Q(k);

	int i;
	for (i = 0; i < k; ++i)
	{
		while ( (!Q.empty()) && arr[i] >= arr[Q.back()])
			Q.pop_back();
		Q.push_back(i);
	}

	for ( ; i < n; ++i) 
	{
		cout << arr[Q.front()] << " ";

		while((!Q.empty()) && Q.front() <= i - k)
			Q.pop_front(); 

		while((!Q.empty()) && arr[i] >= arr[Q.back()])
			Q.pop_back();
		Q.push_back(i);
	}
	cout << arr[Q.front()] << endl;
}

int main(){

	int t;
	cin >> t;
	while(t>0) {
		int n,k;
		cin >> n >> k;
		int i;
		int arr[n];
		for(i=0;i<n;i++)
			cin >> arr[i];
		printKMax(arr, n, k);
		t--;
	}
	return 0;
}

