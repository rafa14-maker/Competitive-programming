/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int arr[100005];

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
     int x,y,z;
        cin>>x>>y>>z;
        if(arr[x]!=0)
        {
        arr[y]=arr[x]%3+1;
            arr[z]=arr[y]%3+1;
        }
        else if(arr[y]!=0)
        {
            arr[z]=arr[y]%3+1;
            arr[x]=arr[z]%3+1;
        }
        else if(arr[z]!=0)
        {
            arr[x]=arr[z]%3+1;
            arr[y]=arr[x]%3+1;
        }
        else
        {
            arr[x]=1;
            arr[y]=2;
            arr[z]=3;
        }
    }

    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }

}


