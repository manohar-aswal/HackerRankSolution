#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int isPrime(long long int num)
{
	if(num == 1)
		return false;
	for(int i = 2;i <= num/2;++i)
	{
		if(num % i == 0)
			return false;
	}
	return true;
}

long long int luckyNumbers(long long int a,long long int b) {
	long long int ans = 0;
	for(int i = a;i <= b;i++)
	{
		long long int SumDigit = 0;
		long long int SumSquare = 0;
		long long int num = i;
		while(num)
		{
			int rem = num % 10;
			SumDigit += rem;
			SumSquare += pow(rem,2);
			num /= 10;
		}
		if(isPrime(SumDigit))
		{
			if(isPrime(SumSquare))
			{
				ans++;
			}
		}
	}
	return ans;
}

int main() {
	long long int res;

	int _cases,_a_i;
	long long int _a,_b;
	scanf("%d", &_cases);

	for(_a_i = 0; _a_i < _cases; _a_i++) { 
		scanf("%lld %lld", &_a,&_b);
		res = luckyNumbers(_a,_b);    
		printf("%lld\n",res);
	}
	return 0;
}

