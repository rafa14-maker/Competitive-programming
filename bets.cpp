#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int li[200],ri[200],ti[200],ci[200];

    int arr[2][200];

    memset(arr,0x3f3f3f3f,sizeof(arr));

    for(int i=1;i<=m;i++)
    {
        cin>>li[i]>>ri[i]>>ti[i]>>ci[i];

        for(int j=li[i];j<=ri[i];j++)
        {
                if(ti[i]<arr[0][j])
                {
                 arr[0][j]=ti[i];
                    arr[1][j]=ci[i];
                }
        }
    }

    int sum=0;

    for(int i=1;i<=n;i++)
    {
        if(arr[0][i]==0x3f3f3f3f)continue;

        sum+=arr[1][i];
      //  cout<<arr[1][i]<<endl;
        }


    cout<<sum<<endl;
}
