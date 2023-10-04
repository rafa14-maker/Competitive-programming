#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int n,k;
        cin>>n>>k;
        if(n==0&&k==0)break;
        int frr[n+5]={0};
        for(int i=1;i<=n;i++)cin>>frr[i];
        for(int i=0;i<k;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            frr[a]-=c;
            frr[b]+=c;
        }
        int counter=0;
        for(int i=1;i<=n;i++)
        {
            if(frr[i]<0)counter++;
        }
          if(counter==0)
          {
              cout<<"S"<<endl;
          }
          else cout<<"N"<<endl;
    }
}
