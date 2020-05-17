#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string str;
	getline( cin,str);

	int count = 0;

	int Alphabet[26] = {0};

	int flag = 0;

	for(int i = 0; i < str.length(); i++)
	{
		int index = (tolower(str[i]) - 'a');
		if(index < 0 || index > 25)
		{
			continue;
		}
		if(Alphabet[index] == 0)
		{
			count++;
		}
		if(count >= 26)
		{
			flag = 1;
			break;
		} 
		else 
		{
			Alphabet[index]++;
		}
	}
	if(flag){
		cout << "pangram" << endl;
	} else {
		cout << "not pangram" << endl;
	}  
	return 0;
}

