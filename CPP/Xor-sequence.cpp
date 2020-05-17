#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
	int Q;
	cin >> Q;
	for(int a0 = 0; a0 < Q; a0++)
	{
		long L;
		long R;
		cin >> L >> R;
		int var = 0;
		int out = 0;
		for(int i = 1; i <= R; i++)
		{
			var ^= i;
			if(i >= L && i<= R)
				out ^= var;
		}
		cout << out << endl;
	}
	return 0;
}

