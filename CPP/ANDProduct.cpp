/*
   Sample Input :
   3 
   12 15 
   2 3 
   8 13

   Sample Output :
   12 
   2 
   8
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--)
	{
		unsigned int a = 0,b = 0;
		cin >> a >> b;
		unsigned int out = a; 
		while(++a <= b)
			out = out & a;
		cout << out << endl;
	}
	return 0;
}

