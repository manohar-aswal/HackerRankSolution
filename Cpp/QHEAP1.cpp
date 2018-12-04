#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	int Q;
	vector <int> v;
	priority_queue <int, vector<int>, greater<int> > pq;
	cin >> Q;
	while(Q--)
	{
		int op , el = 0;
		cin >> op;
		if(op == 1)
		{
			cin >> el;
			v.push_back(el);
			pq.push(el);
		}else if(op == 2){
			cin >> el; 
			while(!pq.empty())
				pq.pop();
			v.erase(remove(v.begin(),v.end(),el),v.end());
			for(int i = 0;i < v.size();i++)
				pq.push(v[i]);
		}else if(op == 3){
			cout << pq.top() << endl;       
		}
	}
	return 0;
}
