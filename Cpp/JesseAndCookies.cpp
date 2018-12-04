/*
   Sample Input :
   6 7
   1 2 3 9 10 12
   Sample Output :
   2
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	int n,k;
	int out = 0;
	cin >> n >> k; 
	priority_queue<int,vector<int>,greater<int> > pq; 
	for(int i = 0;i < n;i++)
	{
		int num;
		cin >> num;
		pq.push(num);
	}
	while(pq.top() < k && !pq.empty())
	{
		int a = pq.top();
		pq.pop();
		int b = pq.top();
		pq.pop();
		int c = 1 * a + 2 * b;
		pq.push(c);
		out++;
	}
	if(pq.empty())
		cout << -1 << endl;
	else
		cout << out << endl;
	return 0;
}
