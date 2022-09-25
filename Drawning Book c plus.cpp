#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
     int i,count=0,count1=0;
     for(i=0;i<=n;i++)
    {
        if(i==p)
        {
            if(i%2==0&&i>0)
            count++;
            break;
        }
        else if(i%2==0&&i>0)
        count++;
        else
        {
        }
    }
    for(i=n;i>0;i--)
    {
        if(i==p&&i==n)
        {
            count1=0;
            break;
        }
        else if(i==p&&i==n-1&&i%2==0)
        {
            count1=0;
            break;
        }
        else if(i==p)
        {
            if(i%2==1)
            count1++;
            break;
        }
        else if(i%2==1&&i==n)
        count1++;
        else
        {
        }
    }
    if(count>count1)
    return count1;
    else
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";
    cout<<result;

    fout.close();

    return 0;
}
