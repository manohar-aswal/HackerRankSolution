#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	string s;
	cin>>s;
	int count[256] = {0}; 
	int flag = 0;

	for (int i = 0; s[i];  i++)
		count[s[i]]++;

	int odd = 0;
	for (int i = 0; i < 256; i++)
		if (count[i] & 1)
			odd++;
	if(odd <= 1)
		flag = 1; 

	if(flag==0)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}

