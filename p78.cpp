#include<bits/stdc++.h>
using namespace std;
int main(){
    // write your code
    int i,l;
    long long int n,n1,x=1;
    cin>>n;
    cin>>l;
    int arr[l];
    for(i=0;i<l;i++)
        cin>>arr[i];
    n1=arr[0];
    for(i=1;i<l;i++)
    {    
    	n1=n1*10+arr[i];
    }
    while(n1!=0)
    {
    	x=x*n;
    	--n1;
	}
	cout<<"MULT=="<<x;
    x=x%1337;
    cout<<"\n"<<x;
    	
    return 0;
}
