#include<iostream>
using namespace std;

int main()
{
	// Read input as specified in the question.
	// Print output as specified in the question.
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
    {
        if((arr[i]==1)||(arr[i]==3))
            cout<<"Vaibhavi"<<endl;
        else if((arr[i]==2)||(arr[i]==4)||(arr[i]==5))
            cout<<"Anjali"<<endl;
        else
        {
            
        }
    }
	return 0;
}
