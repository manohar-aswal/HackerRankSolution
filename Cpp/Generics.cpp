#include <iostream>
#include <vector>

using namespace std;

template<class T>

void printArray(vector<T> & vect)
{
	for(int i = 0;i < vect.size();i++)
		cout << vect[i] << endl;
}

int main() {

	vector<int> vInt{1, 2, 3};
	vector<string> vString{"Hello", "World"};

	printArray<int>(vInt);
	printArray<string>(vString);

	return 0;
}
