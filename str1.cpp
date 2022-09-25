#include<iostream>
using namespace std;
int main()
{
	string f="Alice";
	string l="cooper";
	string n=f+l;
	cout<<n<<endl;
	cout<<n.find("coop")<<endl;
	cout<<n.length()<<endl;
	cout<<n.substr(2,3);
	return 0;
}
