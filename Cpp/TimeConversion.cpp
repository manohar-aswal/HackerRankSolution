#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h> 
#include <iomanip>

using namespace std;

int main()
{
	int h,m,s;
	char c[2];
	scanf("%d:%d:%d%s",&h,&m,&s,c);
	if(!strcmp(c,"PM") && h != 12)
		h+=12;
	if(!strcmp(c,"AM") && h == 12)
		h = 0;
	cout << setfill('0') << setw(2) << h <<":"<< setfill('0') << setw(2) << m<<":"<< setfill('0') <<  setw(2) << s << endl;
	return 0;
}
