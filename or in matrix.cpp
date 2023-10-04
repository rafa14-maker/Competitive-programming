/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //seive();
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr[n+1][m+1],frr[n+1][m+1];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>frr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[i][j]=1;
        }
    }

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(frr[i][j]==0)
            {
                for(int k=0;k<n;k++)
                {
                    arr[k][j]=0;
                }
                 for(int k=0;k<m;k++)
                {
                    arr[i][k]=0;
                }
            }
        }
    }

    int counter=0;

    for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {
            int sum=0;
            for(int k=0;k<n;k++)
            {
                if(arr[k][j]==1)
                {
                    sum=1;
                    break;
                }
            }
             for(int k=0;k<m;k++)
            {
                if(arr[i][k]==1)
                {
                    sum=1;
                    break;
                }
            }
            if(sum!=frr[i][j])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}



