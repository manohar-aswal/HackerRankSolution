#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string str1;
	string str2;
	cin >> str1 >> str2;
	int arr[26] = {0};

	for(int i = 0;i < str1.length();i++)
		arr[str1[i]-'a']++;

	for(int i=0;i < str2.length();i++)
		arr[str2[i]-'a']--;

	int out = 0;
	for(int i=0;i<26;i++)
		out += abs(arr[i]);

	cout << out << endl;
}

