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
        char frr[n+5][n+5];
        for(int i=1;i<=n;i++)
        {

            for(int j=1;j<=n;j++)
            {
                cin>>frr[i][j];
            }

        }

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
      //  cout<<k<<endl;
        for(int i=1;i<=n/2;i++)
        {
            for(int j=n/2+1;j<=n;j++)
            {
                int a=p1-arr[i],b=p2-arr[j];
                k=min(abs((b+arr[i])-(a+arr[j])),k);
            }
        }
        cout<<k<<endl;
    }
}
