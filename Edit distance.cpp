#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
       string arr,frr;

      cin>>arr>>frr;

      int n=arr.size(),m=frr.size();

        int l[n+5][m+5];

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0||j==0)l[i][j]=0;
                else if(arr[i-1]==frr[j-1])l[i][j]=l[i-1][j-1]+1;
                else l[i][j]=max(l[i-1][j],l[i][j-1]);
            }
        }
        cout<<m-l[n][m]<<endl;
    }
}
