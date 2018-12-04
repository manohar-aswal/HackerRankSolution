#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
	int n;
	cin >> n; 

	map<string,string> Dict;

	for(int i = 0; i < n;i++ )
	{
		string name;
		string number; 
		cin >> name >> number; 
		Dict.insert(pair<string,string>(name,number));
	}

	string key;
	while(cin >> key)
	{  
		auto it = Dict.find(key);
		if(it != Dict.end())
			cout << it->first <<"="<< it->second << endl;
		else 
			cout << "Not found" << endl;
	}
	return 0;
}

