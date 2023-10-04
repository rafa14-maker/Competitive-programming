/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int n,m,i,j,arr[7],c;

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>c;
            arr[j]=max(arr[j],arr[j-1])+c;
           // cout<<arr[j]<<" ";
        }
        cout<<arr[m]<<" ";
    }


}


