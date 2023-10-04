#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool p[n+5];
    for(int i=0;i<n;i++)p[i]=false;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                p[i]=true;
                break;
            }
        }
    }
    int k=m;
    for(int i=0;i<n;i++)
    {
        if(p[i]==true)
        {
            int counter=m/arr[i],flag=m%arr[i];
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]>arr[i])
                {
                    int c=counter*arr[j];
                    c+=flag;
                    k=max(k,c);
                }
            }
          //  cout<<k<<" ";
        }
    }

    cout<<k<<endl;
}
