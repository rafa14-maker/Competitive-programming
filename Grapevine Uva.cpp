#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    int n;
    int number[500][500];
    while(cin>>n>>m&&(n||m))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)cin>>number[i][j];
        }
        int q;
        cin>>q;
        while(q--)
        {
            int a,b;
            cin>>a>>b;
            int maxsize=0;
            for(int i=0;i<n;i++)
            {
                int mn_pos=lower_bound(number[i],number[i]+m,a)-number[i];
                for(int j=maxsize;j<n;j++)
                {
            if(n <= i + j or m <= mn_pos + j or b < number[i + j][mn_pos + j])
						break;
                    maxsize=max(maxsize,j+1);
                }
            }
            cout<<maxsize<<endl;
        }
        cout<<"-"<<endl;
    }
}
