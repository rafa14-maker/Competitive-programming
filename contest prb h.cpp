#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,counter=0,b=0,k;

    cin>>n>>m;

    string arr;

    for(i=0;i<m;i++)
    {
        cin>>arr;
        bool print=true;

        for(j=0;j<n;j++)
        {
            if(arr[j]=='0')
            {
                print=false;
                break;
            }
        }

        if(print==false)
        {
            counter++;
            b=max(b,counter);
        }
        else
        {
            counter=0;
        }

    }

    cout<<b<<endl;
}
