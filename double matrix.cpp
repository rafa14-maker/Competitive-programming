#include<bits/stdc++.h>
using namespace std;

 int arr[55][55],frr[55][55],counter=0;

int main()
{
    int n,m;
    cin>>n>>m;


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>frr[i][j];

             if(arr[i][j]>frr[i][j])
            {
                swap(arr[i][j],frr[i][j]);
            }
             if(arr[i-1][j]>=arr[i][j]||arr[i][j-1]>=arr[i][j])
            {
               counter=1;
            }
             if(frr[i-1][j]>=frr[i][j]||frr[i][j-1]>=frr[i][j])
            {
                counter=1;
            }
        }
    }


   if(counter==0)cout<<"Possible"<<endl;
   else cout<<"Impossible"<<endl;
}
