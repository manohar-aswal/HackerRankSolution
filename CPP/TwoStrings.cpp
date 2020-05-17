#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string a;
		string b;
		bool flag = false;
		getline(cin,a);
		getline(cin,b);

		for(int i = 0; i < a.size();i++)
		{
			if(b.find(a[i]) != string::npos)
			{
				flag = true;
				break;
			}
		}
		a.clear();
		b.clear();
		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
