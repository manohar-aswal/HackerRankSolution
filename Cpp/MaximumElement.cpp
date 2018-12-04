/*
Sample Input :
10
1 97
2
1 20
2
1 26
1 20
2
3
1 91
3

Sample Output :
26
91
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	vector <int> v;
	cin >> n;
	while(n--)
	{
		int op,el;
		cin >> op;
		if(op == 1)
		{
			cin >> el;
			v.push_back(el);
		}else if(op == 2){
			v.erase(v.end() - 1);
		}else if(op == 3){
			cout << *max_element(v.begin(),v.end()) << endl;
		}
	}
	return 0;
}
