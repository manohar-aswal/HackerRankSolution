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
	int N;
	cin >> N;
	multimap<string,string> Dist;

	for(int a0 = 0; a0 < N; a0++){
		string firstName;
		string emailID;
		cin >> firstName >> emailID;
		Dist.insert(pair<string,string>(firstName,emailID));
	}

	for(multimap<string,string>::iterator itr = Dist.begin();itr != Dist.end();itr++)
	{
		size_t pos=((*itr).second).find("@"); 
		string str=((*itr).second).substr(pos); 
		if(str == "@gmail.com") 
			cout<<(*itr).first << endl;
	}
	return 0;
}
