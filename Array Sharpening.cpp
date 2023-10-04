#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int l=0,r=n-1;
        int k=0,p=0;
        int flag=0;

       for(int i=0;i<n;i++)
       {
           if(arr[i]>=p&&k==0)
           {
               p++;
           }
           else if(arr[i]<=p&&k==1)
           {
               p--;
           }
           else
           {
               k++;
               if(k==2)break;
           }
       }
       if(k<2)cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }
}
