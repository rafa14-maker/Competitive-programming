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
        vector<string>frr(n);
        for(int i=1;i<=n;i++)
        {
          cin>>frr[i];
        }
         for(int i=1;i<=n;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                if(frr[j][i]=='1')sum+=1;
            }
            arr[i]=sum;
        }
        int p1=0,p2=0;
        for(int i=1;i<=n/2;i++)p1+=arr[i];
        for(int i=n/2+1;i<=n;i++)p2+=arr[i];
        int k=abs(p1-p2);
        k=min(m,k);
        int m=1e6;
      for(int c=1;c<=n;c++)
      {


        for(int i=1;i<=n;i++)
        {
            int sum=0;
            for(int j=1;j<=n;j++)
            {
                if(frr[j][i]=='1')sum+=1;
            }
            arr[i]=sum;
        }
        int p1=0,p2=0;
        for(int i=1;i<=n/2;i++)p1+=arr[i];
        for(int i=n/2+1;i<=n;i++)p2+=arr[i];
        int k=abs(p1-p2);
        k=min(m,k);
      //  cout<<k<<endl;
    }
}

}
