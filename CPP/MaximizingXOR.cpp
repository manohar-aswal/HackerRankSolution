#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int maxXor(int l, int r) {
	int out = 0;
	for(int i = l; i <= r;i++)
	{
		for(int j = i;j <= r;j++)
		{
			if(out < (i ^ j))
				out = i ^ j;
		}
	}
	return out;

}

int main() {
	int res;
	int _l;
	cin >> _l;

	int _r;
	cin >> _r;

	res = maxXor(_l, _r);
	cout << res;

	return 0;
}

