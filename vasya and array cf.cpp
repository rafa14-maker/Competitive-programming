#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[k+5][5];
    for(int i=0;i<k;i++)
    {
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    bool tr=false;

    for(int i=0;i<k;i++)
    {
        if(arr[i]==0)
        {
            for(int j=0;j<k;j++)
            {
                if(arr[j][0]==1&&arr[j][1]>=arr[i][1]&&arr[i][2]<=arr[j][2])
                {
                    tr=true;
                }
            }
        }
    }
    if(tr)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;

        int frr[n+5];
        for(int i=0;i<n;i++)frr[i]=1;

        for(int i=0;i<k;i++)
        {
            if(arr[i][0]==0)
            {
               int idx=1e5;
                for(int j=arr[i][1]-1;j<arr[i][2];j++)
                {
                    frr[j]=idx;
                    idx--;
                }
            }
        }

        for(int i=0;i<k;i++)
        {
            if(arr[i][0]==1)
            {
              // int idx=1e5;
                for(int j=arr[i][1];j<arr[i][2];j++)
                {
                    frr[j]=frr[j-1];
                  //  idx--;
                }
            }
        }


        for(int i=0;i<n;i++)cout<<frr[i]<<" ";cout<<endl;
    }
}

int main()
{
    solve();
}
