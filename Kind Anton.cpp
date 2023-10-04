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
        long long arr[n+5];
          long long frr[n+5];
          int idx1=1e6,idx2=1e6;
          for(int i=0;i<n;i++)cin>>arr[i];
          for(int j=0;j<n;j++)cin>>frr[j];
          for(int i=0;i<n;i++)
          {
           if(arr[i]==-1)
           {
               idx2=i;
               break;
           }
          }
          for(int i=0;i<n;i++)
          {
           if(arr[i]==1)
           {
               idx1=i;
               break;
           }
          }
          int flag=0;

         // cout<<idx1<<" "<<idx2<<endl;

          for(int i=0;i<n;i++)
          {
             long long diff=0;
            if(arr[i]>frr[i])diff=-1;
            else if(arr[i]<frr[i])diff=1;

              if(diff==0)continue;
              if(diff<0)
              {
                 // if(idx1>i)continue;
                 if(idx2>=i)
                  {
                      flag++;
                      break;
                  }
              }
              if(diff>0)
              {
                //  if(idx2>i)continue;
                   if(idx1>=i)
                  {
                      flag++;
                      break;
                  }
              }
          }
          if(flag==0)cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
    }
}
