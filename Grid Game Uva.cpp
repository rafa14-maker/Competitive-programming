#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,grid[8][8];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>grid[i][j];
            }
        }
        int choice[8]={0,1,2,3,4,5,6,7};
        int mn=1e8;
        do
        {
            int sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=grid[i][choice[i]];
            }
            mn=min(mn,sum);
        }while(next_permutation(choice,choice+n));
        cout<<mn<<endl;
    }
}
