#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cin>>m;

    int frr[m];

    for(i=0;i<m;i++)
    {
        cin>>frr[i];
    }

    for(i=0;i<m;i++)
    {int counter=0;
        for(j=0;j<n;j++)
        {
            if(frr[i]>=arr[j])
            {
                cout<<j+1<<endl;

                counter++;

                  break;
            }
        }
        if(counter==0)
        {
            cout<<n+1<<endl;
        }
    }
}
