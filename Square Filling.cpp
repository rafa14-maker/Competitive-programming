#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5][m+5],frr[n+5][m+5];
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            frr[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i+1<n&&j+1<m&&(arr[i][j]==1&&frr[i][j]==0&&arr[i+1][j]!=0&&arr[i][j+1]!=0&&arr[i+1][j+1]!=0))
            {
                    frr[i][j]=frr[i][j+1]=frr[i+1][j]=frr[i+1][j+1]=1;
                    v.push_back(make_pair(i,j));
                                }
             else if(i+1<n&&j+1<m&&(arr[i+1][j]==1&&frr[i+1][j]==0&&arr[i][j]!=0&&arr[i][j+1]!=0&&arr[i+1][j+1]!=0))
            {
                if(i+1<n&&j+1<m)
                {
                    frr[i][j]=frr[i][j+1]=frr[i+1][j]=frr[i+1][j+1]=1;
                    v.push_back(make_pair(i,j));
                }
            }
            else if(i+1<n&&j+1<m&&(arr[i][j+1]==1&&frr[i][j+1]==0&&arr[i+1][j]!=0&&arr[i][j]!=0&&arr[i+1][j+1]!=0))
            {
                if(i+1<n&&j+1<m)
                {
                    frr[i][j]=frr[i][j+1]=frr[i+1][j]=frr[i+1][j+1]=1;
                    v.push_back(make_pair(i,j));
                }
            }
            else if(i+1<n&&j+1<m&&(arr[i+1][j+1]==1&&frr[i+1][j+1]==0&&arr[i+1][j]!=0&&arr[i][j+1]!=0&&arr[i][j]!=0))
            {
                if(i+1<n&&j+1<m)
                {
                    frr[i][j]=frr[i][j+1]=frr[i+1][j]=frr[i+1][j+1]=1;
                    v.push_back(make_pair(i,j));
                }
            }
        }
    }

   /* for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<frr[i][j]<<" ";
        }
        cout<<endl;
    }*/

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]!=frr[i][j])
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first+1<<" "<<v[i].second+1<<endl;
    }
}
