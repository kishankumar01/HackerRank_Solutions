#include<iostream>
using namespace std;
int main()
{
	int n,r,q,m,es=1,an=0;
	cout<<"Enter Number:";
	cin>>n;
	cout<<"Is the number an Armstrong Number:";
	m=n;
	while(m>0)
	{
		r=m%10;
		if((r%2==0)&&(r>0))
		es=es*r;
		an=an+(r*r*r);
		m=m/10;
	}
	if(an==n)
	cout<<" Yes"<<endl;
	else
	cout<<" No"<<endl;
	cout<<"Multiplication of non prime digits:"<<es<<endl;
	cout<<"Addition of cubs of the digits:"<<an;
	return 0;
}
