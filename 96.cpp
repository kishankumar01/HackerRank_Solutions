#include<iostream>
#include<stdlib.h>
using namespace std;
class T
{
	public:
		int x;
		T()
		{
		x=15;
		cout<<"Constracture execured";
		}
		int getx()
		{
			return x;
		}
};
int main()
{
	T t;
	cout<<t.getx();
	return 0;
}
