#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
   bool p[n+5];
   if(n==1)
   {
       cout<<1<<endl;
       return 0;
   }
    for(int i=0;i<=n;i++)p[i]=false;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        p[arr[i]]=true;
    }

    int k=1;

     for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            while(p[k]==true)
            {
                k++;
            }
            arr[i]=k;
            p[k]=true;
        }
    }

     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
