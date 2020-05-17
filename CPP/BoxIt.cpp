#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int BoxesCreated,BoxesDestroyed;

class Box
{
	public:
		int l=0,b=0,h=0;
		Box()
		{
			++BoxesCreated;
		}
		Box(int length,int breadth,int height) : l(length),b(breadth),h(height)
		{
			++BoxesCreated;
		}
		Box(const Box &box)
		{
			l = box.l,b = box.b,h = box.h;
			++BoxesCreated;
		}
		~Box()
		{
			++BoxesDestroyed;
		}
		int getLength()
		{
			return l;
		}
		int getBreadth()
		{
			return b;
		}
		int getHeight()
		{
			return h;
		}
		long long CalculateVolume()
		{
			return (long long)l*b*h;
		}
		bool operator < (const Box &box)
		{
			if(l < box.l)
				return true;
			if(l > box.l)
				return false;
			if(b < box.b)
				return true;
			if(b > box.b)
				return false;
			return h < box.h;
		}
};

namespace std
{
	ostream & operator<<(ostream& out, Box box)
	{
		return out << box.l << ' ' << box.b << ' ' << box.h;
	}
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser"<<endl;
			}
			else
			{
				cout<<"Greater"<<endl;
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	BoxesCreated = 0;
	BoxesDestroyed = 0;
	check2();
	cout<<"Boxes Created : "<<BoxesCreated<<endl<<"Boxes Destroyed : "<<BoxesDestroyed<<endl;
}

