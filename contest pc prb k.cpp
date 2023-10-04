#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=0,p=0,i,a,m,j;
    int arr[p];

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a!=k)
        {
            arr[p]=a;
            p++;
        }
        k=a;
    }

    cin>>m;

    int frr[m];

    for(i=0;i<m;i++)
    {
        cin>>a;bool print=true;

        for(j=0;j<p;j++)
        {
            if(arr[j]<a)
            {
                frr[i]=j+1;
            }
        }
       if(print!=true)
       {
           frr[i]=p;
       }

    }
    for(i=0;i<m;i++)
    {
        cout<<frr[i]<<endl;
    }

}
