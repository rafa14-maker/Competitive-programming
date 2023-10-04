#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
       int counter=0;
        int flag=1;
        vector<int>v;
        for(int i=1;i<=k;i++)v.push_back(i);
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(arr[i]==-1)
            {
            if(i==0&&i+1<n)
               {
                    int a=arr[i+1];
                 // int b=arr[i-1];
                  for(int j=0;j<v.size();j++)
                  {
                      if(a!=v[j])
                      {
                          arr[i]=v[j];
                          break;
                      }
                  }
               }
               else if(i==n-1)
               {
                 //   int a=arr[i+1];
                  int b=arr[i-1];
                  for(int j=0;j<v.size();j++)
                  {
                      if(b!=v[j])
                      {
                          arr[i]=v[j];
                          break;
                      }
                  }
               }
                else
               {
                  int a=arr[i+1];
                  int b=arr[i-1];
                  for(int j=0;j<v.size();j++)
                  {
                      if(a!=v[j]&&b!=v[j])
                      {
                          arr[i]=v[j];
                          break;
                      }
                  }
               }
               if(arr[i]==-1)arr[i]=1;
            }

        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                counter++;
                break;
            }
        }
        if(counter>0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
}
