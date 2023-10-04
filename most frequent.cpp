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
        int arr[105]={0},frr[105]={0};
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a>=0)arr[a]++;
            else a*=(-1),frr[a]++;
        }
      int m=0,k=0;
      for(int i=0;i<=100;i++)
      {
          if(arr[i]>m)
          {
              m=arr[i];
              k=i;
          }
      }
      int flag=0;
       for(int i=0;i<=100;i++)
      {
          if(frr[i]>m)
          {
              flag++;
              m=frr[i];
              k=i;
          }
      }
      if(flag==0)cout<<k<<endl;
      else cout<<(-1)*k<<endl;
    }
}
