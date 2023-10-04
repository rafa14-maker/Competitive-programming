#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,m;
        cin>>n>>m;
        map<int,int>mp;
        int arr[n+5];
        int krr[n+5];
        int prr[n+5];
        for(int i=0;i<n;i++)
            cin>>arr[i],krr[i]=arr[i],prr[i]=krr[i];
        int frr[m+5];
      for(int i=0;i<m;i++)
      {
          int a;
          cin>>a;
          mp[a-1]=1;
      }
        sort(krr,krr+n);
        int idx=0;
        int c=0;
        while(1)
        {

           int  flag=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]!=krr[i])flag++;
            }
            if(flag==0)
            {
                cout<<"YES"<<endl;
                c++;
                break;
            }
           flag=0;
           for(int i=0;i<n;i++)
           {
               if(i+1<n&&arr[i]>arr[i+1])
               {
                   if(mp[i]==1)
                   {
                       flag++;
                       swap(arr[i],arr[i+1]);
                   }
               }
           }
          if(flag==0)break;
           flag=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]!=prr[i])flag++;
            }
            if(flag==0)
              {
                break;
            }

        }
       if(c==0) cout<<"NO"<<endl;
    }
}
